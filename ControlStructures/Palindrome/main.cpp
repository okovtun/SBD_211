#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << ULLONG_MAX << endl;
	cout << "Hello Palindrome" << endl;
	long long int number;		//�����, ��������� � ����������
	long long int reverse = 0;//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	long long int copy = number;	//�������� �������� number, ����� ��������� ������������� ����� �������� ����������,
	//� � �������� ������� ����� �������� copy
	while (copy)
	{
		reverse *= 10;			//����������� ����� ��� ���������� �������� �������
		reverse += copy % 10;	//��������� ������� ������� ��������� �����
		copy /= 10;				//������� ������� ������ �� ��������� �����
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
}