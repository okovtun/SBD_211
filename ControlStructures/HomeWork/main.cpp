#include<iostream>
#include<conio.h>

using namespace std;

//#define SHOOTER
//#define FACTORIAL
//#define DEGREE_OF_NUMBER
#define ASCII

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined SHOOTER

	char key;
	cout << "Shooter" << endl;

	do
	{
		cout << "������ ���� ��������:" << endl;
		key = _getch();
		if ((int)key == 119)
		{
			cout << "w - ������" << endl;
		}
		else if (key == 's')
		{
			cout << "s - �����" << endl;
		}
		else if (key == 97)
		{
			cout << "a - �����" << endl;
		}
		else if (key == 100)
		{
			cout << "d - ������" << endl;
		}
		else if (key == ' ')
		{
			cout << "Space = ������" << endl;
		}
		else if ((int)key == 13)
		{
			cout << "Enter = �����" << endl;
		}
		else
		{
			cout << "��� �����������!" << endl;
		}

	} while (key != 27);




#endif

#if defined FACTORIAL

	int num_factorial;
	cout << "������� ����� ��� ���������� ����������:";
	cin >> num_factorial;
	int result = 1;
	for (int i = 1; i <= num_factorial; ++i)
	{
		result = result * i;
	}
	cout << num_factorial << "!=*" << result << endl;
#endif

#if defined DEGREE_OF_NUMBER

	int degr, num;
	double result;
	cout << "������� ��������� �������:";
	cin >> num;
	cout << "������� ���������� �������:";
	cin >> degr;
	result = 1;
	for (int i = 0; i < degr; i++)
	{
		result = result * num;
	}
	cout << num << "� �������" << degr << "=" << result;
#endif

#if defined ASCII
	int i;

	for (i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
#endif



}