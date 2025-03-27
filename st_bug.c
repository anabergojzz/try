#include <curses.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    initscr();

    addwstr(L"😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍😍");

    getch();
    endwin();

    return 0;
}
