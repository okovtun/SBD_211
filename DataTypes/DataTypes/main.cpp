//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n--------------------------------------------\n"

//#define NUMERIC_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;
	//cout << false << endl;
#if defined NUMERIC_TYPES
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl;

	cout << delimiter << endl;

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;
	
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif

	//ќбъ€вление переменных - Declaration of variable:
	int _1stPlace;
	//int for;
	int a;
	double price;
	//price = 0;
	//cout << "¬ведите цену чегототам: ";  cin >> price;
	//cout << price << endl;
	//undeclared identifier - необъ€вленный идентификатор (необъ€вленное им€)

	//инициализаци€ (initialisation) - присвоение начального значени€.
	//проинициализировать

	double price_of_coffe;	
	//snake_case_style - общеприн€тый стиль в €зыке C++
	//camelCaseStyle (pascalCaseStyle)
	//BigCamel
	//smallCamel
	int number_of_cups;
	cout << "¬ведите стоимость чашки кофе: "; cin >> price_of_coffe;
	cout << "¬ведите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "ќбща€ стоимость покупки: " << total_price << "\n";
}
/*
-------------------------------------------------
	//			type name;
	//»дентификатор (identifier) - это им€.

1. ABC...Zabc...z012...9_;
2. 
3. 
4. 
-------------------------------------------------
*/