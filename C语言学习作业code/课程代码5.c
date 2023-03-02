#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P22
//
int main()
{
	int* p;
	return 0;
}


////B站P21
////指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


////B站P21
////指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}


////B站P21
////修改数组中的元素，选择不同的指针类型
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	//char* p = arr; //一次只改1个字节，而arr有10*4=40个字节
//	//每个元素改成1
//	int i = 0;
//	for (i = 0; i <=10 ; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


////B站P21
////指针类型决定距离
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}


////B站P21
////指针
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	int* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);//地址输出结果一样，可见pa,pc都可以存放好a的地址
//	return 0;
//}