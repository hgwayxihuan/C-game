#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("#####################\n");
	printf("####1.play 0.exit####\n");
	printf("#####################\n");
}
void game()
{
	printf("请猜数字>:");
	int input = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &input);
		if (input > ret)
		{
			printf("猜大了\n");
		}
		else if (input < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((int)time(null));
	do {
		menu();
		printf("请输入数字>: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}