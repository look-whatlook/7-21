#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>


//struct S1	//��һ��Աƫ����0����ǰ��������������� 
//			//����Ϊ�������������� 
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3 //��ͬ����ֵ�ļ��� �Զ������� ������ǩ��Ա������Ϣ
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 ;
//	printf("%d\n", sizeof(s3));
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//		//12
//		//8
//		//16
//		//32
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S tmp) //��ֵ ����һ���ṹ�� ѹջӰ���ٶ�
//{
//	printf("%d %c %lf\n", tmp.a,tmp.c,tmp.d);
//}
//void Print2(const struct S* ps)//��ַ ����һ���ṹ���ַ
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//	printf("%d %c %lf\n", (*ps).a,(*ps).c,(*ps).d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s); 
//	Print2(&s);
//	printf("%d %c %lf\n", s.a,s.c,s.d);
//}

//ö������  //����ȡֵ�ļ��� ��ֵ���趨
//enum Sex 
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = GREEN;
//	int color = RED;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check_sys1()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	//int ret = check_sys();
//	int ret = check_sys1();
//	if (1 == ret)
//	{
//			printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else 
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//	//reallocʹ�õ�ע�����
//	//1. ���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2. ���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3. ����һ���µı���������realloc�����ķ���ֵ

//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

