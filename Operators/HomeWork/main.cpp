#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i = 3;
	i = i++ + ++i;
	cout << i << endl;
}