#pragma once

#include <string>
#include <optional>

namespace dbf {
    struct CommandInfo {
        std::string name;

        std::optional<std::string> description;

        std::optional<std::string> author;

        std::optional<std::string> version;
    };
}
