#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#include <stdlib.h>
#include <time.h>

//猜数字
void menu()
{
	printf("***********猜数字游戏***********\n");
	printf("***     play:1    exit:0     ***\n");
	printf("********************************\n");
}
void game()
{
	//需要一个猜值
	int guess = 0;
	//需要一个随机值
	int ret = rand() % 100 + 1;  //产生1-100的随机值,并赋值给ret

	while (1)
	{

		printf("输入1-100之间的数:");
		scanf("%d", &guess);
		if (guess > 100)
		{
			printf("猜1-100的数哟！\n");
			continue;
		}
		if (guess > ret)
		{
			printf("猜大了哟\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，在试试\n");
		}
		else
		{
			printf("恭喜，猜对了，就是%d\n", ret);
			break;
		}
	}
}
int main()
{
	int input = 0;  //输入
	//那时间戳设置伪随机数字生成器的起始种子值，设置一次，所以放着main函数中
	srand((unsigned int)time(NULL));

	//游戏至少选择一次，用do while最合适
	do
	{
		menu();  //调用菜单函数
		printf("请选择->");
		scanf("%d", &input);
		//有选择之类，用switch
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重新输入！！！\n");
			break;
		}
	} while (input);  //循环条件就是输入值，输入1就在玩一次，输入0就退出
	return 0;
}


//#include <string.h>
////设置关机  用goto
//int main()
//{
//	char input[20];  
//	system("shutdown -s -t 120");  //2分钟后关机
//again:
//	printf("难道电脑将在2分钟后关机，输入'我是猪' 取消关机:\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)   //strcmp比较两个字符串，如果相等，返回0
//	{
//		system("shutdown -a");  //取消关机
//	}
//	else
//	{
//		goto again;  //goto:无条件流程跳转语句,程序流程跳转到指定标号处，接着往下执行
//	}
//	return 0;
//}


////打印99乘法表
//int main()
//{
//	int i = 0;
//	//打印9行数
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);  //2d空2格，符号左对齐
//		}
//		printf("\n");  //每打印一行，换行
//	}
//	return 0;
//}


