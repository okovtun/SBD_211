#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
//#define - ����������
//���������������� (������)
//��� ��������

//#define ���_�������� ���_��������
#if defined MACRO

#endif

#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	//���� ���������� ELOCHKA, �� ������������� ���, �� ��������� #endif
	//����� ����� �����������
	std::cout << "//������� ������ ��� 211 ��������� �������//" << endl;

	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����,\n";
	cout << offset << "����� � ����� ��������,\n";
	cout << offset << "������� ����.\n" << endl;

	cout << offset << "������ �� ���� �������:\n";
	cout << offset << "\"���, ������, ���-���!\"\n";
	cout << offset << "����� ������� ��������:\n";
	cout << offset << "\"������, �� ��������!\".\n" << endl;

	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����\n";
	cout << offset << "������ ��������.\n" << endl;

	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������,\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������, �����.\n" << endl;

	cout << offset << "����� ������� ��������,\n";
	cout << offset << "� � ������� ��������,\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n" << endl;

	cout << offset << "������ ���, ��������,\n";
	cout << offset << "H� �������� � ��� ������\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������!\n" << endl;
#endif
}