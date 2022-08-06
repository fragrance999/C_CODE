#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	//total	喝的瓶数
//	//empty	空的瓶子数
//	int money = 0;
//	scanf("%d", &money);
//
//	int total = money;
//	int empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//int main()
//{
//	//17895 
//	//1.	1 7895		2. 17 895		3. 178 95		4.  1789 5  
//
//	int i = 0,x[4],c = 0;
//	for ( i = 10000; i < 100000; i++)
//	{
//		x[0] = (i / 10000) * (i % 10000);
//		x[1] = (i / 1000) * (i % 1000);
//		x[2] = (i / 100) * (i % 100);
//		x[3] = (i / 10) * (i % 10);
//
//		if (i == x[0] + x[1] + x[2] + x[3])
//		{
//			printf("%d ", i);
//			c++;
//			if (c % 2 == 0)
//				printf("\n");
//		}
//			
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 17895;
//	printf("%d", i % 10000);
//	return 0;
//}

