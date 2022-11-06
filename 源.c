#define  _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	strcpy( b1.name,"C++" );
//	printf("%s\n",b1.name);
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////	int i = 0;
////	int j = 0;
////
////	for (i=0; i < 10; i++);
////	{
////		for (j=0; j < 10; j++)
////		{
////			printf("hehe\n");
////		}
////	}
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
////int main()
////{
////	int i = 0;
////	int n = 0;
////	int ret = 1;
////	scanf("%d", &n);
////	for (i = 1; i <= n; i++)
////	{
////		ret = ret * i;
////	}
////	printf("ret=%d\n", ret);
////	return 0;
////
////}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//	
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=3;n++)
//	{
//		ret = ret * n;//n的阶乘
//		sum = sum +ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int year;
//	cin >> year;
//	if (year % 100 == 0)
//	{
//		if (year % 400 == 0) {
//			cout << "闰年";
//		}
//		else {
//			cout << "平年";
//		}
//	}
//	else {
//		if (year % 4 == 0) {
//			cout << "闰年";
//		}
//		else {
//			cout << "平年";
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int years;
//	scanf_s("%d", &years);//任意输入一个年份
//	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)//四年一润，百年不润，四百年再润
//
//		printf("闰年");
//	else
//		printf("平年");
//	return 0;
//
//	
//}
//#include <stdio.h>
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 400 == 0)
//		{
//			printf("%d是一个闰年\n", year);
//		}
//		if (year % 100 != 0)
//		{
//			printf("%d是一个闰年\n", year);
//		}
//		else
//		{
//			printf("%d不是一个闰年\n", year);
//		}
//	}
//	else
//	{
//		printf("%d不是一个闰年\n", year);
//	}
//}
//#include<stdio.h>
//void main()
//{
//    int year, leap;
//    scanf_s("%d", &year);
//    if (year % 4 == 0);
//    
//        if (year % 100 == 0)
//        
//            if (year % 400 == 0)
//            
//                leap = 1;
//            
//            else
//            
//                leap = 0;
//            
//        
//        else
//        
//            leap = 1;
//        
//    
//    
//
//    if (leap)
//    
//        printf("%d is", year);
//    
//    else
//    
//
//        printf("%d is not", year);
//    
//
//    printf("a leap year.\n");
//}
//编写代码在一个整型有序数组中查找具体的某个数；
//要求：找到了就打印数字所在的下标，找不到则输出：找不到；
//#include<stdio.h>//二分查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//
//	
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
//		if (arr[mid] > k)//对比
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;//找到后跳出
//		}
//	}
//	if (left > right)//左下标大于右下标
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()//编写代码，演示多个字符从两端移动，向中间汇聚。
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒；
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数；cls-清屏，其头文件stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//编写代码实现，模拟用户登录情景，并且只能登陆三次>
//（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序。）
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均输入错误，请重新登录！\n");
//		return 0;
//}
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
// }
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>//任意输入三个数字，按从大到小排列；
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//算法实现：a放最大值，b次之，c放最小值
//	scanf_s("%d%d%d", &a, &b, &c);
//	
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>//冒泡排序法
//int main()
//{
//	int arr[] = { -2,5,4,6,3,8 };
//	int i = 0;
//	int j = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>//写一个代码打印0-100之间所有3的倍数的数字；
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>//给定两个数，求这两个数的最大公约数；(辗转相除法)
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf_s("%d%d", &m, &n);//输入并取出
//	while (m % n)
//	{
//		a = m % n;//取模
//		m = n;
//		n = a;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>//打印1000-2000的闰年，并计算个数；
//int main()
//{
//	int year = 0;
//	int count = 0;//count用于计数变量
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//写一个代码，打印100-200之间的素数；
//int main()//试除法 --除以大于二小于本身的数，如果余数为零，直接跳出。
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a ; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (a == b)//判断a是否为素数；
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
///////一个数字可以写成i=a*b；那么a/b中至少有一个数字<=开平方i，再开平方之前找一个数，可以减少运算次数；
//eg：16=2*8=4*4
//#include<stdio.h>//写一个代码，打印100-200之间的素数；
//#include<math.h>
//int main()//试除法 --除以大于二小于本身的数，如果余数为零，直接跳出。
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{ 
//		for (b = 2; b <=sqrt(a); b++)//sqrt-开平方--其库函数 math
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b >sqrt(a))//判断a是否为素数；
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//写一个代码，打印100-200之间的素数；
//#include<math.h>
//int main()//试除法 --除以大于二小于本身的数，如果余数为零，直接跳出。
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b <= a/2; b++)//一个数开平方必然小于这个数的一半
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > (a/2))//判断a是否为素数；
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//写一个代码，打印100-200之间的素数；
//#include<math.h>
//int main()//试除法 --除以大于二小于本身的数，如果余数为零，直接跳出。
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 101; a <= 200; a+=2)//直接除去偶数，计算量缩小一半
//	{
//		for (b = 2; b <= a / 2; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > (a / 2))//判断a是否为素数；
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//利用数组的方 法求素数
//#define N 50
//int IsPrime(int x, int known[], int number);
//int main()
//{
//	int i = 3;
//	int count = 1;
//	int array[N] = { 2 };
//	while (count < N)
//	{
//		if (IsPrime(i, array, count))
//			array[count++] = i;
//		i++;
//
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d", array[i]);
//		if ((i + 1) % 5 == 0)
//			printf("\n");
//		else
//			printf("\t");
//	}
//	return 0;
//}
//int IsPrime(int x, int known[], int number)
//{
//	int ret = 1;
//	int i;
//	for (i = 0; i < number; i++)
//	{
//		if (x % known[i] == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100;a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1) 
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//编写一段代码，数一下一到一百中有多少个9；
//#include<stdio.h>//这个数除以10商9，模10余9；
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count =%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	double sum = 0.0;
//	for (a = 1; a <= 100; a++)
//	{
//		sum=sum+b*1.0 / a;
//		b = -b;
//	}
//
//	printf("sum=%lf", sum);
//	return 0;
//}
//计算出一组数据中最大的数；
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max) //打擂台算法；
//		{
//			max = arr[i];//
//		}
//	}
//	printf("max=%d\n", max);
//}
//乘法口诀表打印；
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//#include<stdio.h>
//int i = 1;
//int main()
//{
//	for (i = 1; i <= 9; i++)//打印9行；
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%2d表示打印两位数；%-2d表示向左对齐（两位）；
//		}/////////打印一项////////行,列,乘积
//		printf("\n");
//		
//	}
//	return 0;
//}

