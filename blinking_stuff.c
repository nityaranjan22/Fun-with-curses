#include <stdio.h>
#include<curses.h>
#include<stdlib.h>

#define LEFTEDGE 10
#define RIGHTEDGE 30
#define ROW 10


int main()
{
	char message[] = "Hello";
	char blank[] =   "     ";
	int pos = LEFTEDGE;
	int dir = 1;
	int i = 0;

	initscr();
	clear();
	for(pos; pos <=RIGHTEDGE; pos++)
	{
		if(i%2 ==0)
		{
		move(ROW,pos);
		addstr(message);
		move(LINES-1,COLS-1);
		refresh();
		usleep(50000);	
		move(ROW,pos);
		addstr(blank);	
		pos = pos + dir;
		if(pos >= RIGHTEDGE)
		{
			pos = LEFTEDGE;
		}
		}
		else
		{
			move(ROW,pos);
			addstr(blank);
			move(LINES-1,COLS-1);
			refresh();
			usleep(50000);	
			move(ROW,pos);
			addstr(blank);	
			pos = pos;
			if(pos >= RIGHTEDGE)
			{
				pos = LEFTEDGE;
			}
		}
		i = i+1;
	}
}
			
