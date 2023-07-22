#include "query_filter.hpp"

#include <variant>
#include <span>

namespace query_models {
    std::optional<std::uint16_t> parse_uint16(std::array<std::byte, 2> bytes);
    std::optional<std::uint32_t> parse_uint32(std::array<std::byte, 4> bytes);

    std::variant<branch, std::string> parse_branch(std::span<std::byte>& bytes);

    std::variant<query_filter, std::string> query_filter::parse(
            std::vector<std::byte> &bytes) {
        if (bytes[0] != std::byte(0) || bytes[1] != std::byte(5))
            return "Invalid serialized header";

        auto branch_count_start_ptr = bytes.begin() + 2;
        auto branch_count_end_ptr = branch_count_start_ptr + 2;

        auto branch_count
            = parse_uint16(std::array<std::byte, 2>{bytes[2], bytes[3]});
        if (!branch_count.has_value())
            return "Invalid branch count";

        auto current_bytes_ptr = branch_count_end_ptr;

        for (int i = 0; i < branch_count.value(); ++i) {
            auto branch_size_start_ptr = current_bytes_ptr;
            auto branch_size_end_ptr = branch_size_start_ptr + 4;

            auto currentIndex = std::distance(
                    branch_size_start_ptr,
                    bytes.begin());

            auto branch_size = parse_uint32(
                    std::array<std::byte, 4>{
                        bytes[currentIndex],
                        bytes[currentIndex + 1],
                        bytes[currentIndex + 2],
                        bytes[currentIndex + 3]
                    });

            auto branch_data_size_end_ptr
                = branch_size_start_ptr + branch_size.value();

            std::span<std::byte> branch_bytes = std::span<std::byte>{
                branch_size_end_ptr,
                branch_data_size_end_ptr
            };

            auto branch_result = parse_branch(branch_bytes);

        }
    }

    std::variant<branch, std::string> parse_branch(std::span<std::byte>& bytes){
        auto branch_count = bytes[0];
        auto bytes.begin();
    }

    std::optional<std::uint32_t> parse_uint32(std::array<std::byte, 4> bytes){

    }

    std::optional<std::uint16_t> parse_uint16(std::array<std::byte, 2> bytes) {
    }

    branch parse_branch(std::vector<std::byte> bytes) {

    }
}