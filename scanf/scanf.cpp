#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include<time.h>
#include<Windows.h>

int main()
{
	char action;//用于表示玩家的动作 0为石头1为剪刀2为布
	int i = 0; //用于保存一个随机数
	char e = 'Y';//用于判断是否继续游戏（Y/N）
	int s = 0;
	srand((unsigned)time(NULL));//时间作为随机数种子
	system("color E0");
	while (1) {
		system("cls");
		printf("\t\t\t\t\t\t************************\t\t\t\t你已经赢了%d把了\n",s);
		printf("\t\t\t\t\t\t*欢迎参加石头剪刀布大赛*\n");
		printf("\t\t\t\t\t\t************************\n");
		printf("\t\t\t\t\t      请开始你的表演(s=石头 j=剪刀 b=布)\n");
		
		scanf("%c", &action);
		getchar();
			printf("等待电脑行动\n");
			i = rand() % 3;//随机0.1.2
			
			if (i==0 && action == 's') {
				printf("竟然是平局，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 0 && action == 'j') {
				printf("竟然输了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 0 && action == 'b') {
				s = s++;
				printf("恭喜你赢了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 1 && action == 's') {
				s = s++;
				printf("恭喜你赢了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 1 && action == 'j') {
				printf("竟然是平局，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 1 && action == 'b') {
				printf("竟然输了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 2 && action == 's') {
				printf("竟然是输了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 2 && action == 'j') {
				s = s++;
				printf("恭喜你赢了，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			if (i == 2 && action == 'b') {
				printf("竟然是平局，再试一次？(Y OR N)\n");
				scanf("%c", &e);
				getchar();
				if (e == 'N')
					break;

			}
			
	}

	return 0;
}

