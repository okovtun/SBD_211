#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << ULLONG_MAX << endl;
	cout << "Hello Palindrome" << endl;
	long long int number;		//число, введенное с клавиатуры
	long long int reverse = 0;//число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	long long int copy = number;	//копируем значение number, чтобы введенное пользователем число осталось неизменным,
	//а в процессе деления будем изменять copy
	while (copy)
	{
		reverse *= 10;			//освобождаем место для следующего младшего разряда
		reverse += copy % 10;	//сохраняем младший разраяд исходного числа
		copy /= 10;				//убираем младший разряд из исходного числа
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
}