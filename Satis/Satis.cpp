#include <ncurses.h>

int main()
{
    initscr();
    mvprintw(3,5, "test");  
    refresh();
    getch();
    endwin();
    return 0;
}