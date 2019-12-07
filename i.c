#pragma warning(disable : 4996)
#include<stdio.h>
#include<CoreWindow.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 2) + fib(2);
	}
}
int main()
{
	fib(3);
}