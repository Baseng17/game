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
                printf(" ¡á");
            }
            else if (maze[i][j] == '0')
            {
                printf("  ");
            }
            if (maze[i][j] == '2')
            {
                printf(" ¡Ù");
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

int Canmove(int x, int y)
{
    if (maze[y][x / 2] == '1')
    {
        return 0;
    }
    return 1;
}

int main()
{
    Character character = { 2,1," ¡Ú" };

    char key = 0;

    Render();

    while (1)
    {
        if (_kbhit())
        {
            key = _getch();

            if (key == -32)
            {
                key = _getch();
            }

            int X = character.x;
            int Y = character.y;

            switch (key)
            {
            case UP: Y--;
                break;
            case LEFT:X -= 2;
                break;
            case RIGHT:X += 2;
                break;
            case DOWN:Y++;
                break;
            default: printf("Exception\n");
                break;
            }

            if (Canmove(X, Y))
            {
                character.x = X;
                character.y = Y;
            }

            system("cls");

            Render();

        }

        Position(character.x, character.y);
        printf("%s", character.shape);

    }


    return 0;
}