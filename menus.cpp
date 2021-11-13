#include "menus.hpp"

void menus::renderMMenu() {
    initscr();
    cbreak();
    noecho();
    
    getmaxyx(stdscr, maxy, maxx);
    move(maxy/2 - 10, maxx/2 - 10);
    printw("Welcome to Owl Text Editor!!!");
    
    move(maxy/2 - 5, maxy/2 - 20);
    printw("Press <n> to make a new file");
    refresh();
    if (getch() == 'n') {
            menus::renderNfMenu();
    }
        
    endwin();
}

void menus::renderNfMenu() {

}