#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "rus");
	int a = 10, b = 20, c = 3, d = 2, e = 4;
	/*int itog = 0, itog2 = 0;
	itog = a + b - c * d / e; //  Формула не удобная
	printf("Итого: %d\n", itog);
	itog2 = (a + b) - ((c * d) / e); //  Удобная формула
	printf("Более удобный вариант: %d\n", itog2); */

	printf("Сложение  Addition %d\n", a + b);
	printf("Вычитание Substraction %d\n", b - a);
	printf("Умножение Multiplication %d\n", d * e);
	printf("Деление Division %d\n", e / d);
	printf("Остаток от деления remainder division  %d\n", a % d);
	printf("Инкремент Increment %d\n",  ++e); 
	printf("Постфиксный инкремент %d\n", a++);
	printf("%d - инкриментированая a\n", a);
	printf("Декремент Decrement %d\n", --d);
	printf("Декремент постфиксный %d\n", e--);
	printf("%d - декрементированая e\n", e);
}