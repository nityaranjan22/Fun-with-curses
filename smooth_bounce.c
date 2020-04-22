#include<curses.h>
#include<stdio.h>
#include<stdlib.h>

#define LEFTEDGE 10
#define RIGHTEDGE 60
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
    while(1)
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
			dir = -1;
		}
        if(pos <= LEFTEDGE)
        {
            dir = 1;
        }
        /*FOR HARMONIC MOTION 
        if(pos <(LEFTEDGE + RIGHTEDGE)/2)
        {
            dir = dir * ((LEFTEDGE+ RIGHTEDGE)/2 - pos)/10;
        }
        if(pos >(LEFTEDGE + RIGHTEDGE)/2)
        {
            dir = dir * (pos - (LEFTEDGE+ RIGHTEDGE)/2)/10;
        }
        */
    }
}
			
