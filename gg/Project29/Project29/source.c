#include <stdio.h>
#include <Windows.h>


void Position(int x, int y)
{
	COORD position = {x, y};

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

int main()
{
	while (1)
	{
		Position(10, 10);
		printf("¡Ù");

		Position(5, 5);
		printf("¡Ú");


		Sleep(1000);
		system("cls");
	}



	return 0;
}