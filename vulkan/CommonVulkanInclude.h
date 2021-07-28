#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <optional>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <set>

extern bool enablePhysicalDeviceProperties2;
extern bool enablePortabilitySubset;
extern const bool enableValidationLayers;
extern std::vector<const char*> validationLayers;
extern std::vector<const char*> deviceExtensions;