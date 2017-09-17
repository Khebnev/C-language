#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int age, weight;
	char name[30];  //Объевляем массив символов из 50шт.
	printf("Введите Ваше имя: ");
	scanf_s("%s", name);/*Спецификатор строки %s. &name - адрес, куда будет сохраняться строка, т.е. в переменную name.
					  Также,  символ & перед строковыми типами данных ставить не нужно. С остальными - ставим.*/
	printf("Введите Ваш возраст: ");
	scanf_s("%d", &age);
	printf("Введите Ваш вес: ");
	scanf_s("%d", &weight);
	printf("Выведем нашу информацию:\n");
	printf("Вы ввели следующую строку: %s", name );
	printf("Ваш возраст - %d лет\nВаш вес - %d кг \n   И ещё раз твой возраст - %d", age, weight, age);
}  