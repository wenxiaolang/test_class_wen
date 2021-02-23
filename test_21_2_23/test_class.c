#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//qsort�⺯��
//void qsort(void* base,     //�������������Ԫ�ص�ַ
//           size_t num,     //������Ԫ�صĸ���
//           size_t size,    //������ÿ��Ԫ�ص��ֽڴ�С
//           int (*cmp)(const void*, const void*));   //ָ��Ƚ�����Ԫ�صĺ�����ָ��


////void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
////void* ���͵�ָ�� ���ܽ����ò���
////void* ���͵�ָ�� ���ܽ���+-�����Ĳ���


//struct Stu
//{
//    char name[20];
//    int age;
//};

////��������
//int cmp_int(const void* p1, const void* p2)
//{
//    //�Ƚ���������ֵ
//    //  < 0 p1ָ���Ԫ����p2ָ���Ԫ��֮ǰ
//    //  = 0 p1ָ���Ԫ�ص�Ч��p2ָ���Ԫ��
//    //  > 0 p1ָ���Ԫ����p2ָ���Ԫ��֮��
//
//    //if (*(MyType*)a < *(MyType*)b) return -1;
//    //if (*(MyType*)a == *(MyType*)b) return 0;
//    //if (*(MyType*)a > *(MyType*)b) return 1;
//
//    return *(int*)p1 - *(int*)p2;    //˳��
//    //return *(int*)p2 - *(int*)p1;    //����
//}
//
//void int_sort()
//{
//    int arr[10] = { 10,8,9,7,4,5,6,3,1,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
////���и�����
//int cmp_float(const void* e1, const void* e2)
//{
//    /*if (*(float*)e1 == *(float*)e2)
//    {
//        return 0;
//    }
//    else if (*(float*)e1 > *(float*)e2)
//    {
//        return 1;
//    }
//    else
//    {
//        return -1;
//    }*/
//    //����
//    return (int)(*(float*)e1 - *(float*)e2);   //�����ǿ��ת������int
//}
//
//void float_sort()
//{
//    float f[10] = { 1.1,9.9,2.2,8.8,3.3,7.7,4.4,6.6,5.5,10.0 };
//    int sz = sizeof(f) / sizeof(f[0]);
//    qsort(f, sz, sizeof(f[0]), cmp_float);
//    int j = 0;
//    for (j = 0; j < sz; j++)
//    {
//        printf("%0.1f ", f[j]);
//    }
//
//}
//
//
//int cmp_stru_by_age(const void* m1, const void* m2)
//{
//    return ((struct Stu*)m1)->age - ((struct Stu*)m2)->age;   //ʹ�ýṹ��ָ�����ָ�����ĳ�Ա������Ҫ������
//
//}
//
//int cmp_stru_by_name(const void* m1, const void* m2)
//{
//    //�ַ����Ƚ���strcmp
//    return strcmp(((struct Stu*)m1)->name, ((struct Stu*)m2)->name);
//}
//void stru_sort()
//{
//    struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//    int sz = sizeof(s) / sizeof(s[0]);
//    //qsort(s, sz, sizeof(s[0]), cmp_stru_by_age);
//    qsort(s, sz, sizeof(s[0]), cmp_stru_by_name);
//
//}
//int main()
//{
//    //int_sort();
//    
//    //float_sort();
//    
//    stru_sort();
//    return 0;
//}

//-----------------------ͨ�õ�ð�������㷨
//void qsort(void* base,
//           size_t num,     
//           size_t size,    
//           int (*cmp)(const void*, const void*));  

struct Stu
{
	char name[20];
	int age;
};

void swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//ÿ�˽����Ĵ���
		for (j = 0; j < sz - 1 - i; j++)
		{
			//��Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;    //˳��
	//return *(int*)p2 - *(int*)p1;    //����
}

int cmp_stru_by_age(const void* m1, const void* m2)
{
	return ((struct Stu*)m1)->age - ((struct Stu*)m2)->age;

}

void test1()
{
	int arr[10] = { 10,8,9,7,4,5,6,3,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stru_by_age);
}

int main()
{
	test1();
	//test2();
	return 0;
}