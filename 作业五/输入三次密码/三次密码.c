
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 0;
	char pass[20]={0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s",pass);
		if (strcmp(pass, "123456") == 0)//�ȺŲ��ܱȽ��ַ�����������,Ӧ��ʹ�ÿ⺯��strcmp
		{

			printf("������ȷ����½�ɹ���");
			break;
		}
		else
		{
			printf("����������������룡");
		}

		if (i == 3) {
			printf("��������ʧ�ܣ����˳�");

		}
	}
	
	return 0;
}