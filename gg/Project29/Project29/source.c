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
		printf("��");

		Position(5, 5);
		printf("��");


		Sleep(1000);
		system("cls");
	}



	return 0;
}