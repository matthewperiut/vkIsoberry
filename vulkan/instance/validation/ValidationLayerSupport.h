#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdlib>
#include <vector>

bool checkValidationLayerSupport(std::vector<const char*> &validationLayers);