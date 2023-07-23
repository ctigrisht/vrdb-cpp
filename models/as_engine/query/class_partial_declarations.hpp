#pragma once

#include <variant>

namespace query_models{
    class end_branch;
    class and_branch;
    class or_branch;
    class query_constraint_matcher;
}

using branch_variant = std::variant<query_models::end_branch, query_models::or_branch, query_models::and_branch>;