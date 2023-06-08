#include "game.hpp"

namespace se {
    void game::run() {
        while (!gameWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}