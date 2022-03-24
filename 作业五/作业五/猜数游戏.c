#include <stdio.h>

#include<time.h>

#include<stdlib.h>
#include<time.h>
void menu() {

	printf("************请输入数字***************\n");
	printf("**********1.play   0.exit**********\n");
	printf("*************************************\n");
}

void game()
{
	int num = 0;
	int guess = 0;
    num = rand()%100+1;//设置数字在1-100之间
	while (1) {
    printf("请猜数字···\n"); //猜数字
	scanf_s("%d", &guess);
	if (guess > num)printf("你特娘的猜大了\n");
	else if (guess < num)printf("你妹的猜小了\n");
	else
	{
		printf("猜对了！你还真特娘的是个人才！！！\n");
		break;
	}
	}
	
	
}
int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//利用时间戳(设置一次即可，禁止重复)
	do
	{ 
		menu();
			printf("请选择···\n");
			scanf_s("%d", &input);
			switch (input) {
			case 1:
				game();//玩游戏的环节过程
					break;
			case 0:
				printf("退出游戏，下次再见！\n");

				break;

			case 117:
				printf("恭喜你答对爱人生日！触发彩蛋!今晚奖励你！\n");
				input = 0;
				break;
			default:
				printf("选择错误，请重新选择···\n");
				break;



		}
	
	} while (input);
	
	return 0;
}