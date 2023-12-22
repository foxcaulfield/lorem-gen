#include "globals.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Args count: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }

    std::cout << "Init" << std::endl;

    return 0;
}
