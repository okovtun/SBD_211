//ControlStructures
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if(temperature >50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 5)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}