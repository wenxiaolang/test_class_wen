#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <math.h>


//打印
//w###################！
//wl#################!!
//wle###############!!!
//wlec#############!!!!
//wleco###########!!!!!
//wlcome#########!!!!!!
//..........
//wlecome to bit !!!!!!


//int main()
//{
//	char arr1[] = "##################";
//	char arr2[] = "welcome to bit!!!!";   //用arr2第一位去取代arr1的第一位
//	int left = 0;
//	int right = strlen(arr1)-1;    //strlen求字符串长度
//
//	while (left<=right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		
//		printf("%s\n", arr1);
//		Sleep(1000);  //等待1秒，是大写S
//		system("cls");  //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//
//	return 0;
//}



////输入三个数，三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("输入三个整数>");
//	scanf("%d%d%d", &a, &b, &c);
//	//判断a和b，,如果a小于b实现a和b的互换
//	//不能用if else，如果if成立就不会执行else。所以用三个if
//	if (a < b)
//	{
//		tmp = a;  //将a放入一个临时变量
//		a = b;    //将b的值赋给a
//		b = tmp;  //将tmp赋值给b
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//}



////打印1-100之间3的倍数的数
//int main()
//{
//	int i = 0;
//	int count = 0;  //计数
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	return 0;
//}


//两个数的最大公约数
//辗转相除法:1、用较大数除以较小数,得到余数。2、用1中的除数除以1中的余数 
//           3、循环重复  4、直至余数是0为止，最后的除数就是这两个数的最大公约数。

//int main()
//{
//	int m = 0;  //假设m当被除数
//	int n = 0;  //n为除数
//	scanf("%d%d", &m, &n);
//	//如果输入的n较大，交换m和n
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//
//	while (m % n)  //只有真（非0）才执行循环语句
//	{
//		int r = m % n;  //r为余数
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为:%d\n", n);
//	return 0;
//
//}




////判断1000-2000之间的闰年
////闰年：能被4整除，但不能被100整除。或者能被400整除
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



////打印100-200的素数
////素数：除了1和他本身之外，不能被任何数整除
////1不是素数
//int main()
//{
//	int n = 0;
//	//素数不能是偶数
//	for (n = 101; n <= 200; n+=2)
//	{
//		int i = 0;
//		//i从2开始
//		//当循环变量小于√i时, 进入循环,
//		for (i = 2; i <= sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(n))
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}



//1-100中出现9的数
//个数上9就是就%10，余数为9；十位上9就是/10，商等于9
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i/10 == 9)
			printf("%d ", i);
	}
	return 0;
}