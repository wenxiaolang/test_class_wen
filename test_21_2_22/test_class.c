#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��n�Ľײ�  (�õݹ�)
//int Fac(int n)
//{
//	if (n <= 1)   //0�Ľ׳˵���1
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
//	printf("������һ������׳�:>");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}



//���n��쳲���������
//쳲���������1 1 2 3 5 8 13    ǰ������֮���Ǻ������

////����һ�ݹ�
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);   //�ݹ�Ч�ʵͣ���ΪҪ��fib(n-1),��Ҫ֪��ǰ������ʲô���������ƣ���Ҫ�����ܴ󣬺ܶ࣬Ч�ʵ�
//	}
//}

//������-ѭ��
//int fib(int n)
//{
//	int a = 1;  //��һ����
//	int b = 1;  //�ڶ�����
//	int c = 1;  //���n����1����2.c������˼
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
//	printf("����һ��������쳲���������:>");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//��ŵ�����⣨�ݹ飩
//������������ABC��A������Բ�̣����մ�����£�С�����ϡ���Բ�̴�A���ƶ���C����

void move(char x, char y)
{
	printf("%c----->%c\n", x, y);
}
void Hanoi(char a, char b, char c, int n)
{
	void move(char x, char y);
	if (n == 1)  //ֻ��һ�����ӵ�ʱ��֮���A����C��
	{
		move(a, c);
	}
	else
	{
		Hanoi(a, c, b, n - 1);  //��A����n-1�����ӽ���C���ŵ�B�� - �м����
		move(a, c);             //��n�����ӽ���A���ŵ�C��
		Hanoi(b, a, c, n - 1);  //��B����n-1�����ӽ���A���ŵ�C�� -�м����
	}
}
int main()
{
	int n = 0;  //nΪ������
	printf("���������ӵ�����:>");
	scanf("%d", &n);
	Hanoi('A', 'B', 'C', n);;
	return 0;
}

