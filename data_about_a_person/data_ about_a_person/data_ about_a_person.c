#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int age, weight;
	char name[90];  //��������� ������ �������� �� 50��.
	printf("������� ���� ���: ");
	scanf_s("%s", name);/*������������ ������ %s. &name - �����, ���� ����� ����������� ������, �.�. � ���������� name.
					  �����,  ������ & ����� ���������� ������ ������ ������� �� �����. � ���������� - ������.*/
	printf("������� ��� �������: ");
	scanf_s("%d", &age);
	printf("������� ��� ���: ");
	scanf_s("%d", &weight); 
	printf("������� ���� ����������:\n");
	printf_s("���� ��� - %s \n", name);
	printf("��� ������� - %d ���\n��� ��� - %d �� \n", age, weight);
}