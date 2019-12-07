#pragma warning(disable : 4996)
#include "mymath.h"
void Menu()
{
	printf("#############################\n");
	printf("####### 1、ADD    2、SUB#######\n");
	printf("########3、MUL    4、DIV#########\n");
	printf("#############   5 、 EXIT  ########\n");
	printf(" please inter your choic:");
}
int main()
{
	int quit = 0;
	while (!quit)
	{
		Menu();
		int select = 0;
		scanf("%d", &select);
		if (select == 0)
		{
			printf("bye bye\n");
			quit = 1;
			continue;
		}

		int x, y = 0;
		printf("please enter your data<x,y>#");
		scanf(" %d  %d", &x, &y);
		switch (select)
		{
			int z = 0;
		case 1:
			z = myADD(x, y);
			break;
		case 2:
			z = mySUB(x, y);
			break;
		case 3:
			z = myMUL(x, y);
			break;
		case 4:
			z = myDIV(x, y);
			break;


		default:
			printf("error!");
			break;

		}
		int z = 0;
		printf("% d", z);
	}
	system("pause");
	return 0;
}





