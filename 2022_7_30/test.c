#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//编写一个函数实现n的k次方，使用递归实现

//double pow(int n, int k)
//{
//	if (k > 0)
//		return n * pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / pow(n, -k);
//}
//
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//
//}


//逆置字符串
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) > 1)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//
//
//int main()
//{
//	
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//
//}

//void swap(int* x, int* y)
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//
//}
//
//int main()
//{
//	int x, y;
//
//	scanf("%d%d", &x, &y);
//	printf("交换前：%d %d\n", x,y);
//	swap(&x, &y);
//	printf("交换后：%d %d\n", x, y);
//   
//
//	return 0;
//
//}


//int main()
//{
//	int x, arr[20], i = 0;
//
//	scanf("%d", &x);
//
//	unsigned int y = (unsigned int )x;
//	do {
//		arr[i] = y % 2;
//		y /= 2;
//		i++;
//	} while (y > 0);
//
//	int n = i,count= 0;
//
//	for (i = 0; i < n; i++)
//		printf("%d", arr[i]);
//
//	for (i = 0; i < n; i++)
//		if (arr[i] == 1)
//			count++;
//	printf("\n%d个1", count);
//		
//	return 0;
//
//}


//int main()
//{
//	int m, n, t, c = 0;
//	scanf("%d%d", &m, &n);
//	t = m ^ n;
//	while (t != 0)
//	{
//		c++;
//		t = t & (t - 1);
//	}
//	printf("%d", c);
//	return 0;
//}
//


//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数： ");
//	scanf("%d", &num);
//	Printbit(num);
//	return 0;
//}


//int fun(int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if()
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数： ");
//	scanf("%d", &num);
//
//	if (fun(num)) printf("YES");
//
//	return 0;
//}




//int main()
//{
//	int x, arr[20], i = 0;
//
//
//	scanf("%d", &x);
//
//	do {
//		arr[i] = x % 6;
//		x /= 6;
//		i++;
//	} while (x > 0);
//
//	i--;
//
//	for (i; i >=0; i--)
//		printf("%d", arr[i]);
//
//	return 0;
//
//}

//int fun(int m, int n)
//{
//	int r;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	return n;
//}
//
//int main()
//{
//	int m, n,t;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		t = m; m = n; n = t;
//	}
//	int da = fun(m, n);
//
//	printf("%d", da+(m*n/fun(m,n)));
//	return 0;
//}



//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr,i;
//	for (i = 0; i < 5; i++)
//		printf("%2d", *p + i);
//
//	return 0;
//}

//int main()
//{
//	char arr[10000];
//    gets(arr);
//	char* p, * q,t;
//	p = q = arr;
//	while (*p) p++;
//	p--;
//	while (q <= p)
//	{
//		t = *q;
//		*q = *p;
//		*p = t;
//		p--, q++;
//	}	
//	puts(arr);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int i = 0;
//	int y = 0;
//	long long sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		y = y * 10 + a;
//		sum += y;
//	}
//	printf("%lld", sum);
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; ++i)
//	{
//		int temp = i, sum = 0, count = 1;
//		while (temp /= 10) count++;
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//上半部分
//		for (j = 0; j < n - i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	//下半部分
//	for (i = 1; i <= n - 1; i++)
//	{	
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * (n - 1 - i) + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}



