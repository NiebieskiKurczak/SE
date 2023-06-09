#pragma once
#include "window.hpp"
#include "pipeline.hpp"

namespace se {
    class game {
        public:
         int WIDTH = 1600;
         int HEIGHT = 900;
         void run();

        private:
         seWindow gameWindow{WIDTH, HEIGHT, "SE GAME"};
         sePipeline gamePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
    };
}