#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define SIZE 10000

void Load(const char* fileName)
{
	FILE* file = fopen("fileName", "r");

	char buffer[SIZE] = { 0, };

	//ù ��° �Ű����� : ���� �����͸� ������ �޸� ������ ������ ����
	//�� ��° �Ű����� : �� ������ �׸��� ũ��
	//�� ��° �Ű����� : �����͸� �о�� ������ �׸��� ��
	//�� ��° �Ű����� : �����͸� �о�� ������ ������ ����

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}





int main()
{
#pragma region ���� �����


#pragma region ���� ����

	//FILE* file = fopen("data.txt", "w");
	//
	//
	//fputs("CHaracter Information \n", file);
	//fputs("Health : 100\n", file);
	//fputs("Attack : 25\n", file);
	//fputs("Defense : 100\n", file);
	//fclose(file);

#pragma endregion

#pragma region ���� �б�

	Load("agu.txt");

#pragma endregion




#pragma endregion



	return 0;
}