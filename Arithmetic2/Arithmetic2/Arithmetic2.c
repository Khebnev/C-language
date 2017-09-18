#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	// Программа вы считывает формулу:    k  = (m + 1) - (n - 1 - r)
	int k = 0, m = 20, n = 40, r = 25; // k = 0, потому что пока ещё результат не известен.
	//m = m + 1; // 21
	++m; // т.е. то же, что и m = m + 1;
	printf("%d - результат первой скобки\n", m);
	//int nr1 = (--n) - r; //  1-ый вариант
	int nr1 = (n - 1 - r); //2-ой вариант
	printf("%d - результат второй скобки\n", nr1);
	k = m - nr1;
	printf("k = %d\n", k);
	//printf("k = %d", k = (m + 1) - (n - 1 - r));
} 