#include <stdio.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "rus");
	char letter = 'A';
	double decimal = 5.489;
	int number = 100;
	printf("%c - Одиночный символ\n", letter);  //% c - спецификатор символьной переменной.
	printf("decimal = %g, number = %d\n", decimal, number); // %d спецификатор ЦЕЛОГО числа, %g - спецификатор double или float.
	printf("%05.2g - decimal\n", decimal); /*.2g -  точность 2 знака после запятой
										   %05. - 5 знаков до запятой, пустые разряды,
										   если их нет - будут заполнены нолями.*/
}