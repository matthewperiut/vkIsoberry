#pragma once

#include "../CommonVulkanInclude.h"
#include "shaders/read/ReadFile.h"
#include "CreateShaderModule.h"

void createGraphicsPipeline(VkPipeline& graphicsPipeline, VkDevice& device, VkExtent2D& swapChainExtent, VkPipelineLayout& pipelineLayout, VkRenderPass& renderPass);