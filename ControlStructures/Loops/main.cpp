#pragma warning(disable:4326)
#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2

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

#ifdef WHILE_2
	int n;	//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif // WHILE_2

	char key;	//Эта переменная будет хранить код нажатой клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатия клавиши, 
						//и возвращает ASCII-код нажатой клавиши.
						//Функция _getch() объявлена в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной 'key' в тип 'int', 
		//			 для того чтобы увидеть ASCII-код нажатой клавиши
	} while (key != 27);
}