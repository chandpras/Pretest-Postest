#include <ncurses/ncurses.h>
#include <windows.h>
#include <string>
using namespace std;

int main(){
	initscr();
	
	string nama_kapital[]= {"C","H","A","N","D","R","A"," ","P","R","A","S","E","T","Y","A"," ","P","U","T","R","A"};
	
	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	
	for(int i=0 ; i<22 ; i++){
		attron(COLOR_PAIR(i%3+1));
		printw("chandra prasetya putra");
		mvprintw(0,i,nama_kapital[i].c_str());
		refresh();
		attroff(COLOR_PAIR(i%3+1));
		Sleep(500);
		clear();
	}
	
	getch();
	endwin();
}
