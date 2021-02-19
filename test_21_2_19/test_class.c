#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//函数

//写个函数判断闰年（1000-2000）
//闰年：能被4整除，但不能被1000整除。或者能被400整除
int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		//如果是闰年返回1，不是闰年返回0
		if (is_leap_year(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}






////写一个函数判断素数（100-200）
////素数：除了1和本身不能被其他数整除
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)  //j要从2开始，如果从1开始，任何数%上1都等于0
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//返回1是素数，返回0不是素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




////写一个函数，交换两个数
//void change(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y; 
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("before:a=%d  b=%d\n", a, b);
//	change(&a, &b);   //将a，b传过去。xy只在函数里面有效，所以要传址
//	printf("after :a=%d  b=%d\n", a, b);
//	return 0;
//}



//==================================================================================================

//数组指针的使用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int (*pa)[10] = &arr;
//
//	////1种写法
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//pa是数组的地址，解引用就拿到了这个数组
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	////2种写法
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//pa是数组的地址，解引用就拿到了这个数组
//	//	printf("%d ", *(*pa+i));  //*pa==arr  arr是首元素地址，用加也可以,再解引用
//	//}
//
//	//3种写法(较简洁)
//	int* p = arr;  //将首元素赋给指针p，然后遍历
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////二维数组用数组指针好点
////参数是数组的形式
//void print1(int arr[3][5], int x, int y)  //普通做法
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)  //用数组指针
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", ((*(p + i))[j]));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);  //arr - 数组首元素地址
//	printf("\n");
//	print2(arr, 3, 5);  //二维数组的首元素地址是第一行数组的地址
//	return 0;
//}