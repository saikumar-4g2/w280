#ifndef __drawBoundary__
	#define __drawBoundary__
/* 
	* This is conio.h compatible header file for gcc.
*/

#ifndef _CONIO_H
#define _CONIO_H 1

#include <termios.h>
#include <unistd.h>
#include<stdlib.h>
#include <stdio.h>

void clrscr()
{
	system("clear");
}

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

/* reads from keypress, doesn't echo */
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

#endif  /* conio.h *
	/**
	*Draws the boundary arrange the jewels
	*@param[in] x is the x-axis indices
	*@param[in] y is the y-axis indices
	*@return Game Over
	*/

	void drawBoundary(int x,int y,int *posX,int *posY,int *gameOver);

	#endif

/**
	* @file jewel.h
	*/
#ifndef __changeUserLocationOnButtonClick__
	#define __changeUserLocationOnButtonClick__

/**
	*Changes the users loaction by button click
	*@param[in] key 'a' to move left
	*@param[in] key 's' to move right
	*@param[in] Use key 'w' to move up
	*@param[in] Use key 'z' to move down
	*@return number of moves
	*/
	void changeUserLocationOnButtonClick(int *x,int *y,char keyPressed,int *noOfMoves,int *gameQuit);

	#endif

	#ifndef __success__
	#define __success__
     int jewel(int A);
     #endif // __success__
