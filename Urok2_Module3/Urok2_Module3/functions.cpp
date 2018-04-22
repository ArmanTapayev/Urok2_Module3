#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include "Header.h"

/* Задание 1 */
void task1(int *h, int *m, int *s, int sec)
{
	*h = sec / 3600;
	*m = sec % 3600 / 60;
	*s = sec % 3600 % 60 % 60;
}

/* Задание 2 */
int task2(int N)
{
	int reverse = 0, remainer;
	while (N!=0)
	{
		remainer = N % 10;
		reverse = reverse * 10 + remainer;
		N /= 10;
	}
	return reverse;
}

/* Задание 3 */
bool task3(int N)
{
	if (task2(N) == N)
		return 1;
	else
		return 0;
}

/* Задание 4 */
bool perfectNumber(int number)
{
	int sum = 1;
	bool flag = 0;
	for (int i = 2; i <= number / 2; ++i)
	{
		if (number%i == 0)
			sum += i;
	}

	if (sum == number)
		flag = 1;

	return flag;
}

/* Задание 5 */
void rate(int n)
{
	switch (n)
	{
		case 2:
		{
			printf("Неуд.");
		}break;

		case 3:
		{
			printf("Удовл.");
		}break;

		case 4:
		{
			printf("Хорошо.");
		}break;

		case 5:
		{
			printf("Отлично.");
		}break;
	}
}

/* Задание 6 */
void ticket5(int n, int *m1, int *m10, int *m60)
{
	//int m1, m10, m60;
	*m60 = n/60;
	*m10 = n % 60/10;
	*m1= n % 60 %10;
}

/* Задание 7 */
void ticket6(int n, int *m1, int *m5, int *m10, int *m20, int *m60)
{
	//int m1, m10, m60;
	*m60 = n / 60;
	*m20 = n % 60 / 20;
	*m10 = n % 60 % 20 / 10;
	*m5 = n % 60 % 20 % 10 / 5;
	*m1 = n % 60 % 20 % 10 % 5;
}
