//FOR
#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define SIMPLE

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << '123' << endl;
#ifdef FOR_BASICS
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int n;		//�����, ��� �������� ����� ��������� ���������
	double f = 1;	//��������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	if (n >= 0)cout << "Result: " << f << endl;
	else cout << "���� ��� ������!" << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//��������� �������
	int n;			//���������� �������
	double N = 1;	//�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;	//��������� ���������� � �����������
		n = -n;		//���� ���������� ������ �� ���������������
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "������� ASCII-��������:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "��� � �������� �����" << endl;
#endif // ASCII

#ifdef FIBONACCI
	int n;	//���������� �����
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;	//����������� ��� ����� �������,
		//�� ��� ����� ����������:
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE

	for (int i = 1; i <= 10; i++)	//������� for, ��� �������� for
	{
		cout << "������� ��������� �� " << i << ":\n";
		for (int j = 1; j <= 10; j++)//��������� for
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
		cout << endl;
	}


	/*for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				system("CLS");	//������� ������
				cout << h << ":" << m << ":" << s << endl;
				Sleep(101);	//���������������� ���������� ��������� �� �������� ����� �����������
			}
		}
	}*/
}