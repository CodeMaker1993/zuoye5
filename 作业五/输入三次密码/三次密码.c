
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
		printf("请输入密码：\n");
		scanf("%s",pass);
		if (strcmp(pass, "123456") == 0)//等号不能比较字符串的相等与否,应该使用库函数strcmp
		{

			printf("密码正确，登陆成功！");
			break;
		}
		else
		{
			printf("密码错误请重新输入！");
		}

		if (i == 3) {
			printf("三次密码失败，请退出");

		}
	}
	
	return 0;
}