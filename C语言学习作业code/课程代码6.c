#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////B站P26
////压栈举例
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

////B站P26
////传地址更好
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = {"李四",40,"15598886688","男"};
//	//打印结构体数据
//	//传参的时候可以传s也可以传&s
//	//Print2比Print1更好一些，
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


////B站P26
////结构体里包含结构体
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\0";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}


////B站P26
////结构体写法
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = {"张三",20,"15249287076","男"};
//	struct Stu s2 = {"旺财",30,"15596668862","保密"};
//	return 0;
//}


////B站P26
////结构体的声明（定义一个学生类型）
////描述一个学生-需要一些数据，放在大括号里，名字、年龄、电话、性别
////struct是结构体关键字；Stu是结构体标签；struct Stu是结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;//s1, s2, s3是3个全局的结构体变量
//int main()
//{
//	//变量的创建
//	struct Stu s;//因为struct Stu是结构体类型，结构体类型用来创建变量的，故创建一个s变量，该变量为局部变量
//	return 0;
//}

////第2种定义类型的方式
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	//变量的创建
//  struct Stu s1;//struct Stu也可以使用
//	Stu s2;//Stu也可以创建s2了
//	return 0;
//}
