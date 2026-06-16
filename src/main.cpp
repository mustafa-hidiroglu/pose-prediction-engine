#include "engine.h"
#include <iostream>

int main() {
    std::cout << "Starting Pose Prediction Engine..." << std::endl;
    Engine engine;
    engine.initialize();
    engine.run();
    return 0;
}
