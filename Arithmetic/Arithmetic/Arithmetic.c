#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "rus");
	int a = 10, b = 20, c = 3, d = 2, e = 4;
	/*int itog = 0, itog2 = 0;
	itog = a + b - c * d / e; //  ������� �� �������
	printf("�����: %d\n", itog);
	itog2 = (a + b) - ((c * d) / e); //  ������� �������
	printf("����� ������� �������: %d\n", itog2); */

	printf("��������  Addition %d\n", a + b);
	printf("��������� Substraction %d\n", b - a);
	printf("��������� Multiplication %d\n", d * e);
	printf("������� Division %d\n", e / d);
	printf("������� �� ������� remainder division  %d\n", a % d);
	printf("��������� Increment %d\n",  ++e); 
	printf("����������� ��������� %d\n", a++);
	printf("%d - ����������������� a\n", a);
	printf("��������� Decrement %d\n", --d);
	printf("��������� ����������� %d\n", e--);
	printf("%d - ����������������� e\n", e);
}