#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	// ��������� �� ��������� �������:    k  = (m + 1) - (n - 1 - r)
	int k = 0, m = 20, n = 40, r = 25; // k = 0, ������ ��� ���� ��� ��������� �� ��������.
	//m = m + 1; // 21
	++m; // �.�. �� ��, ��� � m = m + 1;
	printf("%d - ��������� ������ ������\n", m);
	//int nr1 = (--n) - r; //  1-�� �������
	int nr1 = (n - 1 - r); //2-�� �������
	printf("%d - ��������� ������ ������\n", nr1);
	k = m - nr1;
	printf("k = %d\n", k);
	//printf("k = %d", k = (m + 1) - (n - 1 - r));
} 