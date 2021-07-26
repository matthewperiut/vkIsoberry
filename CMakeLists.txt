set(TITLE Isoberry)

cmake_minimum_required(VERSION 3.19)
set(CMAKE_CXX_STANDARD 20)
project(${TITLE})

set(SRC_FILES main.cpp
        vulkan/HelloTriangleApplication.cpp
        vulkan/HelloTriangleApplication.h vulkan/instance/validation/ValidationLayerSupport.cpp vulkan/instance/validation/ValidationLayerSupport.h vulkan/device/AvailableExtensions.cpp vulkan/device/AvailableExtensions.h vulkan/device/ChoosePhysicalDevice.cpp vulkan/device/ChoosePhysicalDevice.h vulkan/instance/Instance.cpp vulkan/instance/Instance.h "vulkan/device/QueueFamilies.cpp" "vulkan/device/QueueFamilies.h" vulkan/device/CreateLogicalDevice.cpp vulkan/device/CreateLogicalDevice.h vulkan/CommonVulkanInclude.h vulkan/CommonVulkanInclude.cpp vulkan/window/CreateSurface.cpp vulkan/window/CreateSurface.h)

add_executable(${TITLE} ${SRC_FILES})

# Install Vulkan SDK - https://vulkan.lunarg.com/sdk/home
find_package(Vulkan REQUIRED FATAL_ERROR)
include_directories(${Vulkan_INCLUDE_DIRS})
target_link_libraries (${TITLE} PRIVATE ${Vulkan_LIBRARIES})

# glfw and glm are submodules and handled without adding to the system
    # glfw
    add_subdirectory(ext/glfw EXCLUDE_FROM_ALL)
    target_link_libraries(${TITLE} PRIVATE glfw)
    # glm
    add_subdirectory(ext/glm EXCLUDE_FROM_ALL)
    target_link_libraries(${TITLE} PRIVATE glm)