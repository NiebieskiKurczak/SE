#include "window.hpp"

#include <stdexcept>

namespace se {
    seWindow::seWindow(int x, int y, std::string name) : width{x}, height{y}, windowName{name} {
        initWindow();
    }

    seWindow::~seWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void seWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }

    void seWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR *surface) {
        if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
            throw std::runtime_error("failed to create window surface");
        }
    }
}