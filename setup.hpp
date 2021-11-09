#include <ncurses.h>
#include <iostream>

class Setup {
    public:
        void setupNew();
        void setupFile(char* path);
        int midx, midy;
};