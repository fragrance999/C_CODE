#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define num 10

//1. ��������ʹ����ȫ����λ��ż��ǰ�档
// 
// 
// 
//int  main()
//{
//	int x[num];
//	int os[num];
//	int js[num];
//	int i = 0;
//	int j = 0;
//	int c = 0;
//
//	printf("������10����������:>\n");
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &x[i]);
//
//		//ż��
//		if (x[i] % 2 == 0) os[j++] = x[i];
//
//		//����
//		else js[c++] = x[i];
//
//	}
//
//	int t = i;
//	c = 0;
//	for (i = j; i < t; i++)          os[i] = js[c++];
//	for (i = 0; i < t; i++)      	printf("%d\t", os[i]);
//
//	return 0;
//}




//2.ģ��ʵ�ֿ⺯��strcpy

//int main()
//{
//	char x[10] = "Acd123";
//	char s[10] = "456789";
//
//	char* p = x;
//	char* q = s;
//	while (*p++ = *q++);
//	puts(x);
//
//	return 0;
//}


//3. ģ��ʵ�ֿ⺯��strlen

//int main()
//{
//	char x[10] = "Acd123";
//
//	char* p = x;
//	while (*p) p++;
//
//	printf("%d", p - x);
//	return 0;
//}


//4.���������ж�
//#include<stdio.h>
//int main() {
//    int n; scanf("%d", &n);
//    int a[n], flag1 = 0, flag2 = 0;
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//    for (int i = 0; i < n - 1; i++) {
//        if (a[i] > a[i + 1]) flag1 = 1;
//        else if (a[i] < a[i + 1]) flag2 = 1;
//    }
//    if (flag1 && flag2) printf("unsorted\n");
//    else printf("sorted\n");
//    return 0;
//}


//5.��߷�����ͷ�֮��

//int main()
//{
//    int n = 6;
//    //scanf("%d", &n);
//    int x[6], i = 0;
//    for (i = 0; i < n; i++) scanf("%d", &x[i]);
//    int max = x[0], min = x[0];
//    for (i = 1; i < n ; i++)
//    {
//        if (max < x[i])  max = x[i];
//        else if (min > x[i])  min = x[i];
//    }
//    printf("%d", max - min);
//    return 0;
//
//}



