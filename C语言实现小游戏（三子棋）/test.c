#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP15
//����������
void menu()
{
	printf("****************************************\n");
	printf("************1.play   0.exit*************\n");
	printf("****************************************\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}