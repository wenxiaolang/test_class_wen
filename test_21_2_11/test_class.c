#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#include <stdlib.h>
#include <time.h>

//������
void menu()
{
	printf("***********��������Ϸ***********\n");
	printf("***     play:1    exit:0     ***\n");
	printf("********************************\n");
}
void game()
{
	//��Ҫһ����ֵ
	int guess = 0;
	//��Ҫһ�����ֵ
	int ret = rand() % 100 + 1;  //����1-100�����ֵ,����ֵ��ret

	while (1)
	{

		printf("����1-100֮�����:");
		scanf("%d", &guess);
		if (guess > 100)
		{
			printf("��1-100����Ӵ��\n");
			continue;
		}
		if (guess > ret)
		{
			printf("�´���Ӵ\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�������\n");
		}
		else
		{
			printf("��ϲ���¶��ˣ�����%d\n", ret);
			break;
		}
	}
}
int main()
{
	int input = 0;  //����
	//��ʱ�������α�����������������ʼ����ֵ������һ�Σ����Է���main������
	srand((unsigned int)time(NULL));

	//��Ϸ����ѡ��һ�Σ���do while�����
	do
	{
		menu();  //���ò˵�����
		printf("��ѡ��->");
		scanf("%d", &input);
		//��ѡ��֮�࣬��switch
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("����������������룡����\n");
			break;
		}
	} while (input);  //ѭ��������������ֵ������1������һ�Σ�����0���˳�
	return 0;
}


//#include <string.h>
////���ùػ�  ��goto
//int main()
//{
//	char input[20];  
//	system("shutdown -s -t 120");  //2���Ӻ�ػ�
//again:
//	printf("�ѵ����Խ���2���Ӻ�ػ�������'������' ȡ���ػ�:\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)   //strcmp�Ƚ������ַ����������ȣ�����0
//	{
//		system("shutdown -a");  //ȡ���ػ�
//	}
//	else
//	{
//		goto again;  //goto:������������ת���,����������ת��ָ����Ŵ�����������ִ��
//	}
//	return 0;
//}


////��ӡ99�˷���
//int main()
//{
//	int i = 0;
//	//��ӡ9����
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		//��ӡһ��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);  //2d��2�񣬷��������
//		}
//		printf("\n");  //ÿ��ӡһ�У�����
//	}
//	return 0;
//}


