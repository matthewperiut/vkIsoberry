#pragma once

#include "../CommonVulkanInclude.h"

VkShaderModule createShaderModule(const std::vector<char>& code, VkDevice& device);