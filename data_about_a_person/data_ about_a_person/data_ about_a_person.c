#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int age, weight;
	char name[30];  //��������� ������ �������� �� 50��.
	printf("������� ���� ���: ");
	scanf_s("%s", name);/*������������ ������ %s. &name - �����, ���� ����� ����������� ������, �.�. � ���������� name.
					  �����,  ������ & ����� ���������� ������ ������ ������� �� �����. � ���������� - ������.*/
	printf("������� ��� �������: ");
	scanf_s("%d", &age);
	printf("������� ��� ���: ");
	scanf_s("%d", &weight);
	printf("������� ���� ����������:\n");
	printf("�� ����� ��������� ������: %s", name );
	printf("��� ������� - %d ���\n��� ��� - %d �� \n   � ��� ��� ���� ������� - %d", age, weight, age);
}  