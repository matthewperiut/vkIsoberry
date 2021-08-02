set(TITLE Isoberry)

cmake_minimum_required(VERSION 3.19)
set(CMAKE_CXX_STANDARD 20)
project(${TITLE})

set(SRC_FILES main.cpp vulkan/HelloTriangleApplication.cpp vulkan/HelloTriangleApplication.h vulkan/instance/validation/ValidationLayerSupport.cpp vulkan/instance/validation/ValidationLayerSupport.h vulkan/device/AvailableExtensions.cpp vulkan/device/AvailableExtensions.h vulkan/device/ChoosePhysicalDevice.cpp vulkan/device/ChoosePhysicalDevice.h vulkan/instance/Instance.cpp vulkan/instance/Instance.h "vulkan/queue families/QueueFamilies.cpp" "vulkan/queue families/QueueFamilies.h" vulkan/device/CreateLogicalDevice.cpp vulkan/device/CreateLogicalDevice.h vulkan/CommonVulkanInclude.h vulkan/CommonVulkanInclude.cpp vulkan/window/CreateSurface.cpp vulkan/window/CreateSurface.h vulkan/swapchain/SwapChainSupport.cpp vulkan/swapchain/SwapChainSupport.h vulkan/swapchain/SwapChainSurfaceFormat.cpp vulkan/swapchain/SwapChainSurfaceFormat.h vulkan/swapchain/SwapChainPresentMode.cpp vulkan/swapchain/SwapChainPresentMode.h vulkan/swapchain/SwapChainExtent.cpp vulkan/swapchain/SwapChainExtent.h vulkan/swapchain/SwapChain.cpp vulkan/swapchain/SwapChain.h "vulkan/image views/CreateImageViews.cpp" "vulkan/image views/CreateImageViews.h" "vulkan/graphics pipeline/CreateGraphicsPipeline.cpp" "vulkan/graphics pipeline/CreateGraphicsPipeline.h" "vulkan/graphics pipeline/shaders/read/ReadFile.cpp" "vulkan/graphics pipeline/shaders/read/ReadFile.h" "vulkan/graphics pipeline/CreateShaderModule.cpp" "vulkan/graphics pipeline/CreateShaderModule.h" "vulkan/graphics pipeline/render pass/CreateRenderPass.cpp" "vulkan/graphics pipeline/render pass/CreateRenderPass.h" "vulkan/frame buffer/CreateFrameBuffers.cpp" "vulkan/frame buffer/CreateFrameBuffers.h" "vulkan/commands/CreateCommandPool.cpp" "vulkan/commands/CreateCommandPool.h" vulkan/commands/CreateCommandBuffers.cpp vulkan/commands/CreateCommandBuffers.h vulkan/sync/CreateSyncObjects.cpp vulkan/sync/CreateSyncObjects.h)

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

# file copying for shaders
# basic for now
set(SHADER_PATH "vulkan/graphics pipeline/shaders/shaders")
set(OUT_SHADER_PATH ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${SHADER_PATH} DESTINATION ${OUT_SHADER_PATH})