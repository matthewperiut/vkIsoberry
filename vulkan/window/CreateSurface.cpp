//
// Created by Matthew on 7/25/2021.
//

#include "CreateSurface.h"

void createSurface(VkSurfaceKHR& surface, VkInstance& instance, GLFWwindow* window)
{
    if (glfwCreateWindowSurface(instance, window, nullptr, &surface) != VK_SUCCESS)
    {
        throw std::runtime_error("failed to create window surface!");
    }
}