#include <stdio.h>

#include<time.h>

#include<stdlib.h>
#include<time.h>
void menu() {

	printf("************����������***************\n");
	printf("**********1.play   0.exit**********\n");
	printf("*************************************\n");
}

void game()
{
	int num = 0;
	int guess = 0;
    num = rand()%100+1;//����������1-100֮��
	while (1) {
    printf("������֡�����\n"); //������
	scanf_s("%d", &guess);
	if (guess > num)printf("������Ĳ´���\n");
	else if (guess < num)printf("���õĲ�С��\n");
	else
	{
		printf("�¶��ˣ��㻹��������Ǹ��˲ţ�����\n");
		break;
	}
	}
	
	
}
int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//����ʱ���(����һ�μ��ɣ���ֹ�ظ�)
	do
	{ 
		menu();
			printf("��ѡ�񡤡���\n");
			scanf_s("%d", &input);
			switch (input) {
			case 1:
				game();//����Ϸ�Ļ��ڹ���
					break;
			case 0:
				printf("�˳���Ϸ���´��ټ���\n");

				break;

			case 117:
				printf("��ϲ���԰������գ������ʵ�!�������㣡\n");
				input = 0;
				break;
			default:
				printf("ѡ�����������ѡ�񡤡���\n");
				break;



		}
	
	} while (input);
	
	return 0;
}