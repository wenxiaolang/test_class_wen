#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//用二分法查找数
int main()
{
	int k = 3;  //假设我们要查找7这个数的下标是多少
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//下标        0 1 2 3 4 5 6 7 8 9 
	int left = 0;  //左下标
	int sz = sizeof(arr) / sizeof(arr[0]);  //10
	int right = sz - 1;  //右下标，数组下标是从0开始，所以是要减1

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])   //判断下标所在的数值的大小
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没找到！");
	}
	return 0;
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);   //求数组元素个数
//	printf("sz=%d", sz);  //10
//	return 0;
//}