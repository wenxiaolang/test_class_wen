#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////д��������ʵ����������������ֲ���
//void  binary_search(int arr[], int sz,int k)
//{
//	int left = 0;  //���±�
//	int right = sz - 1;  //���±�
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ���");
//	}
//
//}
//
//int main()
//{
//	int k = 8; //����Ҫ�ҵ�k���±�
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr, sz, k);
//	return 0;
//}



////д��������ÿ���������������num��ֵ��1
//void ADD(int* num)
//{
//	(*num)++;  //++�����ȼ�Ҫ��һЩ
//}
//int main()
//{
//	int num = 0;
//	//����Ҫ�ı������ֵ��Ҫ��ַ
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



////��ʽ����
//int main()
//{
//	//                        �ȵ���printf������ӡ43���õ�����ֵ2(���ص��Ǵ�ӡ�ַ��ĸ���)
//	//           �����ӡ2������ֵ1       
//	printf("%d", printf("%d", printf("%d", 43)));  //4321
//	return 0;
//}

//����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��.
//Ҳ���԰Ѻ���������������ǰ�棬��Ϊ�������Ǵ��������ҵģ��������Բ�������
//���˸���ģ�죬�ڸ����ļ�����
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


//�ݹ�(���ݹ�ʹ��»�С)
//����һ�����ͣ��޷��ţ�������˳���ӡ����ÿһλ���������룺123�������1 2 3 
//123 ����9���ݹ�Print(123/10)
//12 ����9���ݹ�Print(12/10)
//1С��9��printf("%d ", n % 10) - 1
//�ڷ���ִ��12%10 - 2

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


//��д���������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str�������ҵ���һ���ַ�
//	{
//		count++;
//		str++;    //��ַ��1
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

//������������������ʱ�������ݹ�����  --���˵ݹ��û��whileѭ�����
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
	else  //Ҫд==0��ʱ�򣬷�����һֱ�����ң�֪���ҵ�Ϊֹ
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