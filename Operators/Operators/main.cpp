//Operators
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания ( = )
//#define INCREMENT_DECREMENT		//3) Increment/Decrement (++/--)
#define COMPOUND_ASSIGNMENTS	//4) Составные присваивания (Compound assignments)

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined ARITHMETICAL_OPERATORS
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;	//Have no sense. Оператор * может быть только бинарным!

	/*
	--------------------------------
	Unary:  +, -;
	Binary: +, -, *, /, %;
			% - остаток от деления
	--------------------------------
	*/
	cout << 17. / 3 << endl;
	//cout << 17. % 3 << endl;
#endif

#ifdef ASSIGNMENT_OPERATOR

	//		l-value = r-value;
	//int a = 2;	//переменной 'a' присвоить значение '2'
	//int b = 3;	//переменной 'b' присвоить значение '3'
	//int c = a + b * 3 + 8/4;
	
	2 + 3 * 3 + 8 / 4;

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = ++i;

	cout << i << endl;	//1
	cout << j << endl;	//
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS

	int a = 2;
	int b = 3;

	a = a + b;		a += b;		//a + b;		//Оператор "Сложить"
								//a += b;		//Оператор "Прибавить"
	a = a - b;		a -= b;		//Оператор "Отнять"
	a = a * b;		a *= b;
	a = a / b;		a /= b;
	a = a % b;		a %= b;

#endif // COMPOUND_ASSIGNMENTS

}