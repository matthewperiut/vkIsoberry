#pragma once

#include "../CommonVulkanInclude.h"

void createSyncObjects(std::vector<VkSemaphore>& imageAvailableSemaphores, std::vector<VkSemaphore>& renderFinishedSemaphores, std::vector<VkFence>& inFlightFences, std::vector<VkFence>& imagesInFlight, std::vector<VkImage>& swapChainImages, VkDevice& device);