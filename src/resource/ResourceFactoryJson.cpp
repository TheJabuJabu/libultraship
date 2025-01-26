
#include "ResourceFactoryJson.h"
#include "spdlog/spdlog.h"
#include <nlohmann/json.hpp>

namespace Ship {
bool ResourceFactoryJson::FileHasValidFormatAndReader(std::shared_ptr<File> file) {
    if (file->InitData->Format != RESOURCE_FORMAT_JSON) {
        SPDLOG_ERROR("resource file format does not match JSON factory format.");
        return false;
    }

    if (!std::holds_alternative<std::shared_ptr<nlohmann::json>>(file->Reader)) {
        SPDLOG_ERROR("Failed to load resource: File has no JSON document");
        return false;
    }

    return true;
}
} // namespace Ship