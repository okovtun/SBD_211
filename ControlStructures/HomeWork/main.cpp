#include <iostream>
using namespace std;

#define Snowflake
//#define SQ
//#define T1
//#define T2
//#define T3
//#define T4
//#define Romb 
//#define EasyChess
//#define Chessboard
//#define HardChess
void main()
{
	int N = 0;
	cout << "Enter number: ";
	cin >> N;
#ifdef Snowflake
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (i == N / 2 || j == N / 2 || i == j || (i + j) == N - 1)
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
#endif // Snowflake
#ifdef SQ
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // SQ
#ifdef T1
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // T1
#ifdef T2
	for (int i = 0; i < N; i++) {
		for (int j = N; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // T2
#ifdef T3
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i <= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // T3
#ifdef T4
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j >= N - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // T4
#ifdef Romb
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + j == N / 2 - 1 || i >= N / 2 && i + j - N / 2 == N - 1)
				cout << "/";
			else if (i >= N / 2 && i - j == N - i + j || j >= N / 2 && j - i == N - j + i)
				cout << "\\";
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // Romb
#ifdef EasyChess
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i % 2 > 0)
			{
				if (j % 2 > 0)
					cout << "+ ";
				else
					cout << "- ";
			}
			else
			{
				if (j % 2 == 0)
					cout << "+ ";
				else
					cout << "- ";
			}
		}
		cout << endl;
	}
#endif // Easy Chess
#ifdef Chessboard
	{
		char symbblock = 219;
		char verticalline = 179;
		char horizontalline = 196;
		char cornerleftup = 218;
		char cornerleftdown = 192;
		char cornerrightup = 191;
		char cornerrightdown = 217;
		for (int i = 0; i < N + 1; i++)
		{
			for (int j = 0; j < N + 1; j++)
			{
				if (j == 0 && i == 0)
					cout << cornerleftup;
				if (j == N && i == 0)
					cout << cornerrightup;
				if (i == N && j == 0)
					cout << cornerleftdown;
				if (j == N && i == N)
					cout << cornerrightdown;
				if (i < N && i > 0 && j == 0 || i != N && i != 0 && j == N)
					cout << verticalline;
				else if (j < N && j > 0 && i == 0 || j > 0 && j != N && i == N)
					cout << horizontalline << horizontalline;
				if (i > 0 && i < N && j > 0 && j < N)
				{
					if (i % 2 > 0)
					{
						if (j % 2 > 0)
							cout << symbblock << symbblock;
						else
							cout << "  ";
					}
					else
					{
						if (j % 2 == 0)
							cout << symbblock << symbblock;
						else
							cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
#endif // Chessboard
#ifdef HardChess
	for (int i = 0; i < N * N; i++)
	{
		for (int j = 0; j < N * N; j++)
		{
			if ((i / N + j / N) & 1)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
#endif // HardChess

}