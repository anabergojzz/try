#include <curses.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    initscr();

    addstr("😍😍😍😍x");

    getch();
    endwin();

    return 0;
}
