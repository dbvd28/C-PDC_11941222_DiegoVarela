#include <string>
#include <curses.h>
using namespace std;
WINDOW *ventana1, *ventana2, *ventana3, *ventana4;
int main()
{
    int MaxY, MaxX;
    initscr();
    cbreak();
    getmaxyx(stdscr, MaxY, MaxX);
    ventana1 = newwin(MaxY / 2, MaxX / 2, 0, 0);
    ventana2 = newwin(MaxY / 2, MaxX / 2, MaxY / 2, 0);
    ventana3 = newwin(MaxY / 2, MaxX / 2, 0, MaxX / 2);
    ventana4 = newwin(MaxY / 2, MaxX / 2, MaxY / 2, MaxX / 2);
    refresh();
    keypad(stdscr, TRUE);
    noecho();
    int ch;
    ch = getch();
    while (ch != 27)
    {

        box(ventana1, 0, 0);
        touchwin(ventana1);
        wrefresh(ventana1);
        ch = getch();
        box(ventana2, 0, 0);
        touchwin(ventana2);
        wrefresh(ventana2);
        ch = getch();
        box(ventana3, 0, 0);
        touchwin(ventana3);
        wrefresh(ventana3);
        ch = getch();
        box(ventana4, 0, 0);
        touchwin(ventana4);
        wrefresh(ventana4);
        ch = getch();
    }
    endwin();
    return 0;
}
