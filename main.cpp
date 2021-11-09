#include "setup.hpp"

int main(int argc, char** argv) {
    Setup set;
    if (argc == 1) {
        std::cout << "mdo";
        set.setupNew();
    }
    else {
        std::cout << "moo";
    }
}