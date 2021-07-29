#pragma once

#include "../CommonVulkanInclude.h"

void createImageViews(std::vector<VkImage>& images, std::vector<VkImageView>& imageViews, VkFormat& imageFormat, VkDevice& device);