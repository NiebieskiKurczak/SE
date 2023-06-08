#include "window.hpp"

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
}