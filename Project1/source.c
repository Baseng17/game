#include <stdio.h>
#include <Windows.h>
#include <conio.h>




#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

typedef struct Character
{
	int x;
	int y;
	const char* shape;

}Character;

char maze[WIDTH][HEIGHT] =
{

{'1','1','1','1','1','1','1','1','1','1','1',},
{'1','0','1','1','1','1','1','1','1','2','1',},
{'1','0','1','1','1','1','1','1','1','0','1',},
{'1','0','1','1','1','1','1','0','0','0','1',},
{'1','0','1','1','1','1','1','0','1','1','1',},
{'1','0','1','1','1','1','1','0','1','1','1',},
{'1','0','0','0','0','1','1','0','1','1','1',},
{'1','1','1','1','0','1','1','0','1','1','1',},
{'1','1','1','1','0','0','0','0','1','1','1',},
{'1','1','1','1','1','1','1','1','1','1','1',},
{'1','1','1','1','1','1','1','1','1','1','1',},

};

void Render()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			
			if (maze[i][j] == '1')
			{
				printf("¡á");
			}
			else if (maze[i][j] == '0')
			{
				printf("  ");
			}
			if (maze[i][j] == '2')
			{
				printf("¡Ù");
			}
		}

		printf("\n");
	}

}

void Position(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}



int main()
{
	Character character = { 1,1,"¡Ú" };

	Render();

	return 0;
}