#include <ncurses/ncurses.h>
using namespace std;

int main()
{
	initscr();
	
	char a[256];
	char b[256];
	
	getstr(a);
	getstr(b);
	
	printw("Nama : ");
	printw(a);
	printw("\n");
	printw("NPM : ");
	printw(b);

	refresh();
	getch();
	endwin();
}
