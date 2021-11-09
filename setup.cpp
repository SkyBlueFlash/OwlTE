#include "setup.hpp"

void Setup::setupNew() {
    initscr();
    cbreak();
    getmaxyx(stdscr, midy, midx);
    move(midy/2 - 10, midx/2 - 10);
    printw("Welcome to Owl Text Editor!!!");
    refresh();
    move(midy/2 - 5, midx/2 - 20);
    printw("Press N to make a new file");
    getch();
    endwin();
}