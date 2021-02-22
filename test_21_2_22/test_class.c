#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////求n的阶层  (用递归)
//int Fac(int n)
//{
//	if (n <= 1)   //0的阶乘等于1
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数求阶乘:>");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}



//求第n个斐波那契数列
//斐波那契数：1 1 2 3 5 8 13    前两个数之和是后面的数

////方法一递归
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);   //递归效率低，因为要求fib(n-1),就要知道前两个是什么，依次类推，需要的数很大，很多，效率低
//	}
//}

//方法二-循环
//int fib(int n)
//{
//	int a = 1;  //第一个数
//	int b = 1;  //第二个数
//	int c = 1;  //如果n等于1或者2.c才有意思
//
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	printf("输入一个数，求斐波那契数列:>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//汉诺塔问题（递归）
//有三个底座，ABC。A座上有圆盘，按照大的在下，小的在上。将圆盘从A座移动到C座上

void move(char x, char y)
{
	printf("%c----->%c\n", x, y);
}
void Hanoi(char a, char b, char c, int n)
{
	void move(char x, char y);
	if (n == 1)  //只有一个盘子的时候之间从A座到C座
	{
		move(a, c);
	}
	else
	{
		Hanoi(a, c, b, n - 1);  //将A座的n-1个盘子借助C座放到B座 - 中间过程
		move(a, c);             //第n个盘子将从A座放到C座
		Hanoi(b, a, c, n - 1);  //将B座的n-1个盘子借助A座放到C座 -中间过程
	}
}
int main()
{
	int n = 0;  //n为盘子数
	printf("请输入盘子的数量:>");
	scanf("%d", &n);
	Hanoi('A', 'B', 'C', n);;
	return 0;
}

