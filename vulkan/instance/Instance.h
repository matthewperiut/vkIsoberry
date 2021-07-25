#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <cstdlib>
#include <vector>

#include "validation/ValidationLayerSupport.h"

void createInstance(const char* name, uint32_t versionVkMakeVersion, VkInstance& instance, bool enableValidationLayers = false, std::vector<const char*> validationLayers = {});