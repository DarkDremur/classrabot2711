#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
	int chislo_1 = 0 + rand()% 1580;
    int chislo_2 = 1200 + rand()% 1580;

	long res_1 = pow(chislo_1, 2) + pow(chislo_2, 2);
	long res_2 = pow(chislo_1 + chislo_2, 2);

	if (res_1 > res_2)
	{ 
		printf("Сумма квадратов больше");
	}
	else
	{
		printf("Сумма квадрат cуммы больше");
	}




}
void taskl()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	printf("Введите номер задания: ");
	int task = 0;
	scanf_s("%d", &task);

	if (task == 1);
	{
		system("cls");
		taskl();
	}



	system("pause");
}