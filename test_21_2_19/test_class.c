#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ���ʹ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int (*pa)[10] = &arr;
//
//	////1��д��
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//pa������ĵ�ַ�������þ��õ����������
//	//	printf("%d ", (*pa)[i]);
//	//}
//
//	////2��д��
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//pa������ĵ�ַ�������þ��õ����������
//	//	printf("%d ", *(*pa+i));  //*pa==arr  arr����Ԫ�ص�ַ���ü�Ҳ����,�ٽ�����
//	//}
//
//	//3��д��(�ϼ��)
//	int* p = arr;  //����Ԫ�ظ���ָ��p��Ȼ�����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//��ά����������ָ��õ�
//�������������ʽ
void print1(int arr[3][5], int x, int y)  //��ͨ����
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
//������ָ�����ʽ
void print2(int(*p)[5], int x, int y)  //������ָ��
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
	print1(arr, 3, 5);  //arr - ������Ԫ�ص�ַ
	printf("\n");
	print2(arr, 3, 5);  //��ά�������Ԫ�ص�ַ�ǵ�һ������ĵ�ַ
	return 0;
}