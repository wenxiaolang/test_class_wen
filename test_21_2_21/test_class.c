#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////写个函数，实现整型有序数组二分查找
//void  binary_search(int arr[], int sz,int k)
//{
//	int left = 0;  //左下标
//	int right = sz - 1;  //右下标
//
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到！");
//	}
//
//}
//
//int main()
//{
//	int k = 8; //假设要找到k的下标
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr, sz, k);
//	return 0;
//}



////写个函数，每调用这个函数，将num的值加1
//void ADD(int* num)
//{
//	(*num)++;  //++的优先级要高一些
//}
//int main()
//{
//	int num = 0;
//	//函数要改变外面的值，要传址
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



////链式访问
//int main()
//{
//	//                        先调用printf函数打印43，得到返回值2(返回的是打印字符的个数)
//	//           这里打印2，返回值1       
//	printf("%d", printf("%d", printf("%d", 43)));  //4321
//	return 0;
//}

//函数的声明一般出现在函数的使用之前。要满足先声明后使用.
//也可以把函数放着主函数的前面，因为编译器是从上向下找的，这样可以不用声明
//多人负责模快，在各自文件声明
//#include "Add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//递归(看递归就大事化小)
//接收一个整型（无符号），按照顺序打印它的每一位，例如输入：123，输出：1 2 3 
//123 大于9，递归Print(123/10)
//12 大于9，递归Print(12/10)
//1小于9，printf("%d ", n % 10) - 1
//在返回执行12%10 - 2

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	return printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//编写函数，求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str解引用找到哪一个字符
//	{
//		count++;
//		str++;    //地址加1
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("strlen = %d\n", len);
//	return 0;
//}

//加条件：不允许创建临时变量（递归解决）  --有了递归就没有while循环语句
//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
//1+1+1+0
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else  //要写==0的时候，否正会一直往后找，知道找到为止
	{
		return 0;
	}
		
}
int main()
{
	char arr[] = "abcedfg";
	int len = my_strlen(arr);
	printf("strlen=%d\n", len);
	return 0;
}