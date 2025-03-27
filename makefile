all:
	gcc st_bug.c -DNCURSES_WIDECHAR=1 -lncursesw
