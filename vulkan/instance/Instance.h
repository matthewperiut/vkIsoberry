#pragma once

#include "../CommonVulkanInclude.h"
#include "../device/AvailableExtensions.h"
#include "validation/ValidationLayerSupport.h"

void createInstance(const char* name, uint32_t versionVkMakeVersion, VkInstance& instance);