#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double money;
	cout << "������� �������� �����: "; cin >> money;
	cout << money << endl;
	money += 1e-7;
	int grn = money;	//������� �������������� ����� �� 'double' � 'int' � ������� ������.
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
}