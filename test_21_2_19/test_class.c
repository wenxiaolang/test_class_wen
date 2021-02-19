#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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

//二维数组用数组指针好点
//参数是数组的形式
void print1(int arr[3][5], int x, int y)  //普通做法
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//参数是指针的形式
void print2(int(*p)[5], int x, int y)  //用数组指针
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", ((*(p + i))[j]));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);  //arr - 数组首元素地址
	printf("\n");
	print2(arr, 3, 5);  //二维数组的首元素地址是第一行数组的地址
	return 0;
}