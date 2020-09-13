#include <curses.h>
WINDOW *ventana;
int main()
{
    int MaxY, MaxX;
    initscr();
    getmaxyx(stdscr, MaxY, MaxX);
    if (!has_colors())
    {
        endwin();
        return 1;
    }
    cbreak();
    noecho();
    nonl();
    intrflush(ventana, FALSE);
    keypad(ventana, TRUE);
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_YELLOW);
    ventana = newwin(MaxY, MaxX, 0, 0);
    wbkgd(ventana, COLOR_PAIR(1));
    box(ventana, ACS_VLINE, ACS_HLINE);
    mvwaddstr(ventana, 0, 1 ,"Ventana ejemplo");
    touchwin(ventana);
    wrefresh(ventana);
    getchar();
    endwin();
    return 0;
}
