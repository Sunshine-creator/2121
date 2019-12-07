#pragma warning(disable : 4996)
#include "mymath.h"
int myADD(int x, int y)
{
	return x + y;
}

int mySUB(int x, int y)
{
	return x - y;
}
int myMUL(int x, int y)
{
	return x*y;
}
int myDIV(int x, int y)
{
	if (0==y)
	{
		printf("div zero\n");
		return -1;
	}
	return x / y;
}
