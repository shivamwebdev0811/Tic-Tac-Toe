#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
void main()
{
    int gd = DETECT, gm;
    int i;

    int arr[9];
    int ch;
    int size=20;
    int count = 0;
    initgraph(&gd, &gm, "C://TURBOC3/BGI");
    setbkcolor(5);
    gotoxy(36, 24);
    printf("LOADING");
    setcolor(WHITE);
    for (i = 0; i <= 600; i++)
    {
	line(20 + i, 400, 20 + i, 410);
	delay(5);
    }
    gotoxy(26, 25);
    printf("Press any key to continue");

    getch();
    cleardevice();
    setbkcolor(7);
    gotoxy(34, 15);
    printf("T");
    delay(100);
    printf("i");
    delay(100);
    printf("c");
    delay(100);
    printf("-");
    delay(100);
    printf("T");
    delay(100);
    printf("a");
    delay(100);
    printf("c");
    delay(100);
    printf("-");
    delay(100);
    printf("T");
    delay(100);
    printf("o");
    delay(100);
    printf("e");
    delay(3000);

    cleardevice();
    setbkcolor(3);
    line(200, 100, 200, 400);
    line(400, 100, 400, 400);
    line(100, 170, 500, 170);
    line(100, 300, 500, 300);
    gotoxy(20, 10);
    printf("1");
    gotoxy(38, 10);
    printf("2");
    gotoxy(55, 10);
    printf("3");
    gotoxy(20, 16);
    printf("4");
    gotoxy(38, 16);
    printf("5");
    gotoxy(55, 16);
    printf("6");
    gotoxy(20, 23);
    printf("7");
    gotoxy(38, 23);
    printf("8");
    gotoxy(55, 23);
    printf("9");






    do
    {
	gotoxy(10, 5);
	printf("Enter the number:");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(150, 150, size);
		arr[0]=1;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(20, 10);
		printf("X");
		arr[0]=-1;

	    }

	    break;
	case 2:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(300, 150, size);
		arr[1]=2;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(38, 10);
		printf("X");
		arr[1]=-2;
	    }
	    break;
	case 3:
	    if (count % 2 == 0)
	    {
	    setcolor(RED);
		circle(450, 150, size);
		arr[2]=3;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(55, 10);
		printf("X");
		arr[2]=-3;
	    }
	    break;

	case 4:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(150, 250, size);
		arr[3]=4;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(20, 16);
		printf("X");
		arr[3]=-4;
	    }

	    break;
	case 5:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(300, 250, size);
		arr[4]=5;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(38, 16);
		printf("X");
		arr[4]=-5;
	    }

	    break;
	case 6:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(450, 250, size);
		arr[5]=6;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(55, 16);
		printf("X");
		arr[5]=-6;
	    }
	    break;
	case 7:

	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(150, 350, size);
		arr[6]=7;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(20, 23);
		printf("X");
		arr[6]=-7;
	    }

	    break;
	case 8:
	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(300, 350, size);
		arr[7]=8;
	    }
	    else
	    {
		setcolor(BLUE);
		gotoxy(38, 23);
		printf("X");
		arr[7]=-8;
	    }

	    break;
	case 9:

	    if (count % 2 == 0)
	    {
		setcolor(RED);
		circle(450, 350, size);
		arr[8]=9;
	    }
	    else
	    {

		gotoxy(55, 23);
		textcolor(1);
		printf("X");
		arr[8]=-9;
	    }

	    break;
	}

	 gotoxy(8,3);
	if (count > 3)
	{
	    if ((arr[0] == 1) && (arr[1] == 2) && (arr[2] == 3))
	    {
		printf("player 1 wins");
		setcolor(RED);
		line(100,150,500,150);
		getch();
		exit(0);
	    }
	    else if ((arr[0]== 1) && (arr[3] == 4) && (arr[6] == 7))
	    {
		printf("player 1 wins");
		setcolor(RED);
		line(150,100,150,400);
	       //	break;
	       getch();
		exit(0);
	    }
	    else if ((arr[2] == 3) && (arr[4] == 5) && (arr[6] == 7))
	    {
		printf("player 1 wins");
	       //	break;
	       setcolor(RED);
	       line(450,120,100,370);
	       getch();
		exit(0);
	    }
	    else if ((arr[1] == 2) && (arr[4] == 5) && (arr[7] == 8))
	    {
		printf("player 1 wins");
		//break;
		setcolor(RED);
		line(300,100,300,400);
		getch();
		exit(0);
	    }
	    else if ((arr[3] == 4) && (arr[4] == 5) && (arr[5] == 6))
	    {
		printf("player 1 wins");
	       //	break;
	       setcolor(RED);
	       line(100,250,500,250);
	       getch();
	       exit(0);
	    }
	    else if ((arr[0]==1)&&(arr[4]==5)&&(arr[8]==9))
	    {
	    printf("player 1 wins");
	    setcolor(RED);
	    line(100,120,450,370);
	    getch();
	    exit(0);
	    }
	    else if ((arr[6] == 7) && (arr[7] == 8) && (arr[8] == 9))
	    {
		printf("player 1 wins");
		setcolor(RED);
		line(100,350,500,350);
		getch();
		exit(0);
	    }

	    else if ((arr[2] == 3) && (arr[5] == 6) && (arr[8] == 9))
	    {
		printf("player 1 wins");
		setcolor(RED);
		line(450,100,450,400);
		//break;
		getch();
		exit(0);
	    }

	    else if ((arr[0] == -1) && (arr[1] == -2) && (arr[2] == -3))
	    {
		printf("player 2 wins");
		//break;
		setcolor(BLUE);
		line(100,150,500,150);
		getch();
		exit(0);
	    }
	    else if ((arr[0] == -1) && (arr[4] == -5) && (arr[8] == -9))
	    {
		printf("player 2 wins");
		//break;
		setcolor(BLUE);
		line(100,120,450,370);
		getch();
		exit(0);
	    }
	    else if ((arr[2] == -3) && (arr[4] == -5) && (arr[6] == -7))
	    {
		printf("player 2 wins");
		//break;
		setcolor(BLUE);
		line(450,120,100,370);
		getch();
		exit(0);
	    }
	    else if ((arr[1] == -2) && (arr[4] == -5) && (arr[7] == -8))
	    {
		printf("player 2 wins");
		//break;
		setcolor(BLUE);
		line(300,100,300,400);
		getch();
		exit(0);
	    }
	    else if ((arr[3] == -4) && (arr[4] == -5) && (arr[5] == -6))
	    {
		printf("player 2 wins");
	       //	break;
	       setcolor(BLUE);
	       line(100,250,500,250);
	       getch();
	       exit(0);
	    }
	    else if ((arr[6] == -7) && (arr[7] == -8) && (arr[8] == -9))
	    {
		printf("player 2 wins");
	       //	break;
	       line(100,350,500,350);
	       getch();
	       exit(0);
	    }
	    else if ((arr[0] == -1) && (arr[3] == -4) && (arr[6] == -7))
	    {
		printf("player 2 wins");
		setcolor(BLUE);
		line(150,100,150,400);
	       //	break;
	       getch();
	       exit(0);
	    }
	    else if ((arr[2] == -3) && (arr[5] == -6) && (arr[8] == -9))
	    {
		printf("player 2 wins");
	       //	break;
	       setcolor(BLUE);
	       line(450,100,450,400);
	       getch();
	       exit(0);
	    }

	}

	 count++;
    } while (count <= 8);

    getch();
}