#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ�� - ��ָ��

//int main()
//{
//	//int* p = NULL;    //p������ָ�� - ָ�����ε�ָ�� - ������εĵ�ַ
//	//char* pc = NULL;  //pc���ַ�ָ�� - ָ���ַ���ָ�� - ����ַ��ĵ�ַ
//	//����ָ�� -- ָ�������ָ�� -- ���Դ������ĵ�ַ
//
//	//arr - ��Ԫ�صĵ�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;  //������ĵ�ַ������   - p��������ָ��
//
//	return 0;
//}


////arr��&arr������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);  //arr��&arr��ӡ�����ĵ�ַ��һ����
//	printf("&arr=%p\n", &arr);
//
//	printf("arr+1 = %p\n", arr + 1);  //������1�Ͳ�һ����
//	printf("&arr+1 = %p\n", &arr + 1);  //&arr������ĵ�ַ
//	return 0;
//}


////���д����ָ��
//int main()
//{
//	char* arr[5];
//	//1.ȡ��ַ&arr;
//	//2.(*p)����������֤��ָ�� - p��ָ�������
//	//3.[5] - pָ���������5��Ԫ�� 
//	//4.д����char* - pָ��������Ԫ��������char*
//	char* (*p)[5] = &arr;
//
//	int arr2[15] = { 0 };
//	int(*pa)[15] = &arr2;
//	return 0;
//}

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
//	//	printf("%d ", *(*pa+i));  //*pa==arr  arr����Ԫ�ص�ַ���ü�Ҳ����,�ڽ�����
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
//��ͨ������ӡ��λ����
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

//ָ������  ������,�������ָ��
//int main()
//{
//	int arr[10] = { 0 };  //��������
//	char ch[5] = { 0 };   //�ַ�����
//	int* pa[4];  //�������ָ������� -- ָ������
//	char* pb[5]; //����ַ�ָ������� -- ָ������
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };    //����������ʹ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//ָ�������ʹ��
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
// 	int i = 0;
//	//�ҵ�parr��ÿһ������Ԫ�ص�ַ
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		//��ӡÿ��
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//-----------------------------------------------------------------------------------------------

////�ַ�ָ��
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";  //�����ַ���
//	const char* p2 = "abcdef";  //����const�����Ӿ��н�׳��
//	//arr1��arr2���������飬���������ռ�
//	//p1��p2�ǳ����ַ�����ֻ��һ�ݣ���ָ��ͬһ�ռ�
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
//	//��ʵ�ǰ�a�ĵ�ַ����p
//	const char* p = "abcdef";   //"abcdef"��һ�������ַ���
//	//printf("%c\n", *p);  //p��a�ĵ�ַ��*p����a
//	printf("%s\n", p);
//
//	//*p = 'w';   //���󣬲����޸ġ����Լ���const���ó�����벻��
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