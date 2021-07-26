#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <optional>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <vector>

extern const bool enableValidationLayers;
extern std::vector<const char*> validationLayers;