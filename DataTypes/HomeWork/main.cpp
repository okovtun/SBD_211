#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	double money;
	cout << "¬ведите денежную сумму: "; cin >> money;
	cout << money << endl;
	money += 1e-7;
	int grn = money;	//не€вное преобразование типов из 'double' в 'int' с потерей данных.
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
}