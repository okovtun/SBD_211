#pragma warning(disable:4326)
#include<iostream>
using namespace std;

//#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;	//Счетчик цикла
	int n;		//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello\n";
		//i++;
	}
#endif // WHILE_1

	int n;	//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
}