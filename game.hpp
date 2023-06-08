#pragma once
#include "window.hpp"

namespace se {
    class game {
        int WIDTH = 1600;
        int HEIGHT = 900; 

        seWindow gameWindow{WIDTH, HEIGHT, "SE GAME"};

        public: void run();
    };
}