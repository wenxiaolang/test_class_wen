#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数组指针 - 是指针

//int main()
//{
//	//int* p = NULL;    //p是整形指针 - 指向整形的指针 - 存放整形的地址
//	//char* pc = NULL;  //pc是字符指针 - 指向字符的指针 - 存放字符的地址
//	//数组指针 -- 指向数组的指针 -- 可以存放数组的地址
//
//	//arr - 首元素的地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;  //将数组的地址存起来   - p就是数组指针
//
//	return 0;
//}


////arr和&arr的区别
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);  //arr和&arr打印出来的地址是一样的
//	printf("&arr=%p\n", &arr);
//
//	printf("arr+1 = %p\n", arr + 1);  //但加上1就不一样了
//	printf("&arr+1 = %p\n", &arr + 1);  //&arr是数组的地址
//	return 0;
//}


////如何写数组指针
//int main()
//{
//	char* arr[5];
//	//1.取地址&arr;
//	//2.(*p)先括起来保证是指针 - p是指针变量名
//	//3.[5] - p指向的数组是5个元素 
//	//4.写类型char* - p指向的数组的元素类型是char*
//	char* (*p)[5] = &arr;
//
//	int arr2[15] = { 0 };
//	int(*pa)[15] = &arr2;
//	return 0;
//}

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
//	//	printf("%d ", *(*pa+i));  //*pa==arr  arr是首元素地址，用加也可以,在解引用
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
//普通方法打印二位数组
void print(int arr[3][5], int x, int y)
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
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}


//------------------------------------------------------------------------------------------

//指针数组  是数组,用来存放指针
//int main()
//{
//	int arr[10] = { 0 };  //整形数组
//	char ch[5] = { 0 };   //字符数组
//	int* pa[4];  //存放整形指针的数组 -- 指针数组
//	char* pb[5]; //存放字符指针的数组 -- 指针数组
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };    //但不是这样使用
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//指针数组的使用
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
// 	int i = 0;
//	//找到parr中每一个的首元素地址
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		//打印每行
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//-----------------------------------------------------------------------------------------------

////字符指针
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";  //常量字符串
//	const char* p2 = "abcdef";  //加上const，更加具有健壮性
//	//arr1和arr2是两个数组，是有两个空间
//	//p1和p2是常量字符串，只存一份，都指向同一空间
//	if (p1 == p2)  
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	//其实是把a的地址赋给p
//	const char* p = "abcdef";   //"abcdef"是一个常量字符串
//	//printf("%c\n", *p);  //p是a的地址，*p就是a
//	printf("%s\n", p);
//
//	//*p = 'w';   //错误，不能修改。所以加上const，让程序编译不过
//	//printf("%s\n", p);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}