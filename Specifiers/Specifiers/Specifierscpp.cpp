#include <stdio.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "rus");
	char letter = 'A';
	double decimal = 5.489;
	int number = 100;
	printf("%c - ��������� ������\n", letter);  //% c - ������������ ���������� ����������.
	printf("decimal = %g, number = %d\n", decimal, number); // %d ������������ ������ �����, %g - ������������ double ��� float.
	printf("%05.2g - decimal\n", decimal); /*.2g -  �������� 2 ����� ����� �������
										   %05. - 5 ������ �� �������, ������ �������,
										   ���� �� ��� - ����� ��������� ������.*/
}