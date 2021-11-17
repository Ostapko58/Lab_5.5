// Lab_5.5.cpp
// < Онишківа Остапа >
// Лабораторна робота No 5.5
// Рекурсивні функції
// Варіант 5

#include<iostream>
#include<cmath>
using namespace std;

int Q(int m, int n, int &level)
{
	level++;
	if (n==1||m==1)
	{
		return 1;
	}
	else if (m<n)
	{
		return Q(m, m, level);
	}
	else if (m==n)
	{
		return 1+Q(m, m - 1, level);
	}
	else
	{
		return Q(m, n - 1, level) + Q(m - n, n, level);
	}
}

int main()
{
	int m, n, level=0;
	cout << "m= "; cin >> m;
	cout << "n= "; cin >> n;
	cout << "k= " << Q(m, n, level) << endl;
	cout << level << endl;
	return 0;
}