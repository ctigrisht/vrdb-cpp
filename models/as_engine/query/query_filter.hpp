#pragma once

#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <variant>

#include "tdx-lib/models/values/tdx_type.hpp"
#include "tdx-lib/models/values/tdx_value.hpp"

namespace query_models {
    class branch;
//    class end_branch;
//    class and_branch;
//    class or_branch;
    class query_property_matcher;

    enum class branch_type : std::int32_t {
        branch_none = 0,
        branch_end = 1,
        branch_and = 2,
        branch_or = 3
    };

    enum class property_match_condition : std::int32_t {
        equals = 0,
        above = 1,
        less = 2,
        count_equals = 3,
        count_above = 4,
        count_less = 5,
        //regex = 6,
    };

    class end_branch {
    public:
        std::vector<query_property_matcher> matchers{};
    };

    class and_branch {
    public:
        std::vector<branch> branches{};
    };

    class or_branch {
    public:
        std::vector<branch> branches{};
    };

    class branch {
    public:
        branch_type type = branch_type::branch_none;
        std::optional<end_branch> branch_end;
        std::optional<and_branch> branch_and;
        std::optional<or_branch> branch_or;
    };

    class link_query{
    public:
        std::string link_name;
    };

    class query_property_matcher {
    public:
        std::uint32_t table_id;
        std::uint16_t schema_id;
        std::uint16_t property_id;
        tdx_values::tdx_value_type value_type;

        bool is_join = false;
        std::unique_ptr<tdx_values::tdx_value> comparer_value;
        property_match_condition condition;

        std::optional<std::vector<link_query>> links = {};
    };

    /// Composed of branches, priority is: OR>AND
    class query_filter {
    public:
        std::vector<branch> branches{};
//        std::vector<link_query> links{};

        static std::variant<query_filter, std::string> parse(std::vector<std::byte>& bytes);
    };
}