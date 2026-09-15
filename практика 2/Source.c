#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int task1();
int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	tusk2();
	tusk3();
	return 0;
}

int task1()
{
	printf("1\n");
	printf("  2\n");
	printf("    3\n"); // подзадание 1
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Умножение %d на %d равно %d\n ", 2000, 4, 2000 * 4);
	printf ("%g разделить %e равно %f\n ",5., 2000000., 5./2000000); 
	return 0;
}
int tusk2()
{
	int N = 3;
	int K = 43;
	printf("Сейчас %d часов %d минут 00 секунд\n ",N,K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", N,K);
	printf("С 8.00 прошло %d секунд\n", 00);
	printf("Текущий час  = %2.2f суток  и текущая минута =  %2.2f часа\n", N / 24., K / 80.);
	return 0;
}
int tusk3()
{
	int L = 2313;
	int n = 4;
	int k = 2;
	int m = 6;
	printf("Вариант 21\n");
	printf("Дано:\n");
	printf("%10.d\n",n);
	printf("%10.d\n",L);
	printf("      ______\n");
	printf("Ответ:\n");
	printf("      %0*.*f\n",m+k+1,m,n/2314.);
	return 0;
}
