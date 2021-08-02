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

const int MAX_FRAMES_IN_FLIGHT = 2;
const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

extern bool enablePhysicalDeviceProperties2;
extern bool enablePortabilitySubset;
extern const bool enableValidationLayers;
extern std::vector<const char*> validationLayers;
extern std::vector<const char*> deviceExtensions;