#include <iostream>
#include <stdio.h>
#include <math.h>


/* ������� 1
	�������� ������������ ���������� a, b � � � ������ �� ��������.
	�����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ������ �1, �2. ������� ��������� ����� �������� �������������, ��� ������� ����� ����� ������������.
	����������. ��� ���������� ������� ����������� ������� ���������� ����-������� ����� (���������� � �������), � ��� �� ����� ������ �� �������.
	���������� � ������� - ���������� ������������ ����	 math.h � ������-���� ������� pow, ������ ���������� �������� ������ ���� ���������� ��������, � ������ - �������, ��� ������ double.
	����� ������ - ������������ ���� stdio.h, ������� printf, ������ ���������� �������� ��������� ������, � ����������� - ����������, �������� ������� ������-���� �������.

run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c;
	double x1,x2,d;
	a = printf("vvedite a:\n");
	scanf("%lf",&a);
	b = printf("vvedite b:\n");
	scanf("%lf",&b);
	c = printf("vvedite c:\n");
	scanf("%lf",&c);
	d = b * b - 4 * a * c;
	if (d<0) printf("net korney");
	if (d>0) {
		x1= -b + sqrt(d)/(2*a);
		x2= -b - sqrt(d)/(2*a);
	
		printf("x1 = %lf\n",x1);
		printf("x2 = %lf\n",x2);
		printf("d = %lf\n",d);
	}
	if (d==0) {
		x1= -b + sqrt(d)/(2*a);
		printf("only one root x = %lf\n",x1);		
	}
	return 0;
}
