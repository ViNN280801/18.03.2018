#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include "Header.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int w;
	printf("������� �������: ");
	cin >> w;
	switch (w)
	{
	case 1:
	{
		//1.���� ��� �������, ������������� �� ����������� : �[n] � B[m].����������� ������ C[n + m], ��������� �� 
		//��������� �������� � � �, ������������� �� �����������(������ � �� ������ �������������).
		int lenght = 10, mas[10], mas2[10];
		printf("First array: \n");
		fillArray(mas, lenght);
		printArray(mas, lenght);
		printf("Second array: \n");
		fillArray(mas2, lenght);
		printArray(mas2, lenght);
		printf("Third array: \n");
		printArray(mas, lenght);
		printArray(mas2, lenght);
	}
	break;
	case 2:
	{
		//2.���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, 
		//� ������� ����� ������� ����� �������� ���� ��������.
		int mas1[10], mas2[10], lenght = 10;
		SameElementsInArrays(mas1, lenght, mas2);
	}
	break;
	case 3:
	{
		//3.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, 
		//� ������� ����� ������� �������� ������� A, ������� �� ���������� � B.
		int mas1[10], lenght = 10, mas2[3], lenght2 = 3, mas3[7], lenght3 = 7;
		In_A_but_not_in_B(mas1, lenght, mas2, mas3);
	}
	break;
	case 4:
	{
		//4.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, 
		//� ������� ����� ������� �������� ������� B, ������� �� ���������� � A.
		int mas1[10], mas2[10], lenght = 10, mas3[10];
		In_B_but_not_in_A(mas1, lenght, mas2, mas3);
	}
	break;
	case 5:
	{
		//5.���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, 
		//� ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.
		int mas1[10], mas2[10], lenght = 10;
		AntiSameElementsInArrays(mas1, lenght, mas2);
	}
	break;
	case 6:
	{
		//1.*�������� �������, ������� ��������� ���������� ������ 
		//����� ����� � ��������� ��� ���������� �������.
		int mas[10], lenght = 10;
		fillArray(mas, lenght);
		printArray(mas, lenght);
	}
	break;
	case 7:
	{
		//2.*�������� �������, ������� ��������� ����� � 
		//���������� ������, ���� ����� ������ � ����, ���� ��������.
		int T;
		Parity(&T);
	}
	break;
	case 8:
	{
		//3.**�������� �������, ������� ���������� ������, ���� ���������� ����� �������, � ����, ���� �� �������.
		//������� ����� � ��� �����, ������� �������� ������ �� 1 � �� ����(2, 5, 7, 11 � �.�.).
		int number;
		SimpleNumber(&number);
	}
	break;
	case 9:
	{
		//4.***����� ���������� �����������, ���� ����� ���� ��� ��������� 
		//����� ��� ������. �������� ������� ������ ����� ����� �� ��������� ���������.
		int interval;
		AbsoluteNumber(&interval);
	}
	break;
	case 10:
	{
		//5.**�������� �������, ������� ���������� ������, ���� ���������� �������� �������� ��������� - �������� � ����, ���� �� ��������.
		//�� ����� ��� ����� ���������-�������� ��������, � � ��������� �� �����
	}
	break;
	case 11:
	{
		//6.**�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� �������� ������������� ����� � ���� �������.
		int mas[10], lenght = 10;
		MaxElementInArray(mas, lenght);
	}
	break;
	case 12:
	{
		//7.**�������� �������, ������� ��������� ��� ������� ����� �����. ��������� ������������ �������� ��������� ������ ���� ��������, � ��������� ������� � ������ ������.
		int mas1[10], mas2[10], mas3[10];
		SummaElementovArray(mas1, mas2, mas3);
	}
	break;
	case 13:
	{
		//5.**�������� �������, ������� ��������� ����� ������������ ����� � ��������� ����� �� ����� ������ ���� ���� ����� ��������� ���� ����(���������� �����).
		//������� ���������� ������, ���� ����� ����������(����� �����) � ����, ���� �� ����������(����� �� �����).
		int number;
		HappyTicket(&number);
	}
	break;
	}
}