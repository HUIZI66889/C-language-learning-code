#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//B站P26
//结构体的声明（定义一个学生类型）
//描述一个学生-需要一些数据，放在大括号里，名字、年龄、电话、性别
//struct是结构体关键字；Stu是结构体标签；struct Stu是结构体类型
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};
int main()
{
	//变量的创建
	struct Stu s;//因为struct Stu是结构体类型，结构体类型用来创建变量的，故创建一个s变量
	return 0;
}
