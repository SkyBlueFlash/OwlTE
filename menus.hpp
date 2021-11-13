#include <iostream>
#include <ncurses.h>


class menus {
    public:
        // displays the main menu of the program
        void renderMMenu();
        // displays the menu for creating new files
        void renderNfMenu();
    private:
        // stores the max width and height of the terminal
        int maxx, maxy; 
};