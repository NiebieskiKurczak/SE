#include "game.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
    se::game app{};

    try {
        app.run();
    } catch (std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}