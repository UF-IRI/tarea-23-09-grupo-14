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
	int acum = 1;
	for (int i = 1;i <=n; i++)
	{
		acum = acum*i;
	}
	return acum;
}


