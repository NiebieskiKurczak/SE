#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace se {
    class seWindow {
        int width;
        int height;

        std::string windowName;
        GLFWwindow *window;

        public: 
         seWindow(int x, int y, std::string name);
         ~seWindow();

         seWindow(seWindow &) = delete;
         seWindow &operator=(seWindow &) = delete;

         bool shouldClose() {
            return glfwWindowShouldClose(window);
         }           

         void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

        void initWindow();
    };
}