#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ö��ַ�������
int main()
{
	int k = 3;  //��������Ҫ����7��������±��Ƕ���
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//�±�        0 1 2 3 4 5 6 7 8 9 
	int left = 0;  //���±�
	int sz = sizeof(arr) / sizeof(arr[0]);  //10
	int right = sz - 1;  //���±꣬�����±��Ǵ�0��ʼ��������Ҫ��1

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])   //�ж��±����ڵ���ֵ�Ĵ�С
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("û�ҵ���");
	}
	return 0;
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);   //������Ԫ�ظ���
//	printf("sz=%d", sz);  //10
//	return 0;
//}