#pragma once

#include <string>
#include <vector>
#include <optional>
#include <memory>
#include <variant>

#include "tdx-lib/models/values/tdx_type.hpp"
#include "tdx-lib/models/values/tdx_value.hpp"

#include "class_partial_declarations.hpp"

namespace query_models {
//    class branch;
//    class end_branch;
//    class and_branch;
//    class or_branch;
//    class query_constraint_matcher;

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
        std::vector<query_constraint_matcher> matchers{};
    };

    class and_branch {
    public:
        std::vector<branch_variant> branches{};
    };

    class or_branch {
    public:
        std::vector<branch_variant> branches{};
    };

    class link_query{
    public:
        std::string link_name;
    };

    class extern_value_matcher{
    public:
        std::unique_ptr<tdx_values::tdx_value> extern_value;
        std::int32_t table_constraint_id;
        property_match_condition condition;
    };

    // select * from tables.Users as t_User join tables.Posts as t_Post on t_User.Id == t_Post.UserId where t_User == @userId;
    class intern_value_matcher{
    public:
        property_match_condition condition;

        std::uint32_t table_id;
        std::uint16_t schema_id;
        std::uint16_t compared_constraint_id;
        std::unique_ptr<tdx_values::tdx_value> origin_value;
    };

    class query_constraint_matcher {
    public:
        std::uint16_t schema_id;
        std::uint16_t constraint_id;
        tdx_values::tdx_value_type value_type;
        std::vector<std::variant<extern_value_matcher, intern_value_matcher>> properties = {};
        std::optional<std::vector<link_query>> links = {};
    };

    /// Composed of branches, priority is: OR>AND
    class query_filter { // doc.Id == 1234 && (doc.Age >= 30 || doc.Age < 5);
    public:
        std::uint32_t table_id;
        std::optional<std::vector<std::uint16_t>> selected_constraint_ids = std::nullopt;
        std::optional<std::vector<branch_variant>> branches = std::nullopt;
        std::optional<std::vector<link_query>> links = std::nullopt;

        static std::variant<query_filter, std::string>
            parse(std::vector<std::byte>& bytes);
    };
}