/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"
#include "nucleus/filesystem/device.h"
#include "nucleus/filesystem/file.h"

#include <mutex>
#include <condition_variable>

namespace fs {

class ISOContainerDevice : public IDevice {
    File* isoFile;

public:
    // Manage concurrent accesses to ISO contents
    std::mutex mutex;

    ISOContainerDevice(const Path& mountPath, File* isoFile);

    File* openFile(const Path& path, OpenMode mode) override;
    bool existsFile(const Path& path);
    bool removeFile(const Path& path);
};

}  // namespace fs