
#pragma once

#include "ResourceFactory.h"
#include "File.h"
#include <memory>

namespace Ship {
class ResourceFactoryJson {
public:
    bool FileHasValidFormatAndReader(std::shared_ptr<File> file);
};
} // namespace Ship