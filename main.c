#include"cal.h"

void menu()
{
	printf("###########################\n");
	printf("##  1.ADD        2.SLB   ##\n");
	printf("##  3.MUL        4.DIV   ##\n");
	printf("##               0.QUIT  ##\n");
	printf("###########################\n");
	printf("Plesae Enter:>");
}

int main()
{
	int(*p[4])(int,int) = { my_add, my_sub, my_mul, my_div };
	int quit = 0;
	while (!quit)
	{
		menu();
		int select = 0;
		scanf("%d", &select);

		if (select == 0)
		{
			quit = 1;
			continue;
		}
		if (select<1 && select>4)
		{
			quit = 1;
			continue;
		}
		int x = 0; int y = 0;
		printf("请输入两个数：");
		scanf("%d %d", &x, &y);
		int z=p[select - 1](x,y);
		printf("结果是：%d\n", z);

	}
	printf("byebye!\n");
	system("pause");
	return 0;
}