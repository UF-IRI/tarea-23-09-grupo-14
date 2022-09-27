#pragma once
using namespace std;

int mayor(int a, int b)
{
	if (a > b)
	{
		
		return a;
	}
	else
	{
		
		return b;
	}
}
int menor(int a, int b)
{
	if (a < b)
	{
		
		return a;
	}
	if (a > b)
	{
		return b;
	}
}

int factorial(int n)
{
	int i = 0;
	int aux = n-i;

	if (n == 0)
	{
		return 1;
	}
	else return aux * n + factorial(n - 1);
}


