#pragma once

#include "ResourceFactory.h"

namespace Ship {
class ResourceFactoryJson : public ResourceFactory  {
public:
    static bool FileHasValidFormatAndReader(std::shared_ptr<File> file);
};
} // namespace Ship