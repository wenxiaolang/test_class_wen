#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <math.h>


//��ӡ
//w###################��
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
//	char arr2[] = "welcome to bit!!!!";   //��arr2��һλȥȡ��arr1�ĵ�һλ
//	int left = 0;
//	int right = strlen(arr1)-1;    //strlen���ַ�������
//
//	while (left<=right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		
//		printf("%s\n", arr1);
//		Sleep(1000);  //�ȴ�1�룬�Ǵ�дS
//		system("cls");  //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//
//	return 0;
//}



////�������������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("������������>");
//	scanf("%d%d%d", &a, &b, &c);
//	//�ж�a��b��,���aС��bʵ��a��b�Ļ���
//	//������if else�����if�����Ͳ���ִ��else������������if
//	if (a < b)
//	{
//		tmp = a;  //��a����һ����ʱ����
//		a = b;    //��b��ֵ����a
//		b = tmp;  //��tmp��ֵ��b
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



////��ӡ1-100֮��3�ı�������
//int main()
//{
//	int i = 0;
//	int count = 0;  //����
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


//�����������Լ��
//շת�����:1���ýϴ������Խ�С��,�õ�������2����1�еĳ�������1�е����� 
//           3��ѭ���ظ�  4��ֱ��������0Ϊֹ�����ĳ��������������������Լ����

//int main()
//{
//	int m = 0;  //����m��������
//	int n = 0;  //nΪ����
//	scanf("%d%d", &m, &n);
//	//��������n�ϴ󣬽���m��n
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//
//	while (m % n)  //ֻ���棨��0����ִ��ѭ�����
//	{
//		int r = m % n;  //rΪ����
//		m = n;
//		n = r;
//	}
//	printf("���Լ��Ϊ:%d\n", n);
//	return 0;
//
//}




////�ж�1000-2000֮�������
////���꣺�ܱ�4�����������ܱ�100�����������ܱ�400����
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



////��ӡ100-200������
////����������1��������֮�⣬���ܱ��κ�������
////1��������
//int main()
//{
//	int n = 0;
//	//����������ż��
//	for (n = 101; n <= 200; n+=2)
//	{
//		int i = 0;
//		//i��2��ʼ
//		//��ѭ������С�ڡ�iʱ, ����ѭ��,
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



//1-100�г���9����
//������9���Ǿ�%10������Ϊ9��ʮλ��9����/10���̵���9
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