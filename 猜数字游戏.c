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
	printf("�������>:");
	int input = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &input);
		if (input > ret)
		{
			printf("�´���\n");
		}
		else if (input < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
		printf("����������>: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}