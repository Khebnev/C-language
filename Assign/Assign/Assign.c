#include <stdio.h>
#include <locale.h>

int  main(void)
{
	setlocale(LC_ALL, "rus");
	int a = 10, b = 20;
	printf("a = %d, b = %d\n", a, b);
	printf("�������� a+=b (10+20) a = %d\n", a += b); // ��������� ���������� � 'a'. a = a+b; a = 10+20; a = 30;
	printf("��������� a-=b (30-20) a = %d\n", a-=b); // a = a- b; a = 30 - 20; a = 10;
	printf("��������� b*=a (20*10) b = %d\n", b*=a); // b = b * a; b = 20 * 10; b = 200;
	printf("������� b/=a (200/10) b = %d\n", b/=a); // b = b/a; b = 200/10; b = 20;
	printf("������� �� ������� a%%=b 10%%20 a = %d\n", a%=b);
	// a+=b �� ��, ��� � a = a = b,  �� ������� ������� � ������. 
}