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
//	struct Book b1 = { "C���Գ������",55 };
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
//		ret = ret * n;//n�Ľ׳�
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
//			cout << "����";
//		}
//		else {
//			cout << "ƽ��";
//		}
//	}
//	else {
//		if (year % 4 == 0) {
//			cout << "����";
//		}
//		else {
//			cout << "ƽ��";
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
//	scanf_s("%d", &years);//��������һ�����
//	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)//����һ�󣬰��겻���İ�������
//
//		printf("����");
//	else
//		printf("ƽ��");
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
//			printf("%d��һ������\n", year);
//		}
//		if (year % 100 != 0)
//		{
//			printf("%d��һ������\n", year);
//		}
//		else
//		{
//			printf("%d����һ������\n", year);
//		}
//	}
//	else
//	{
//		printf("%d����һ������\n", year);
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
//��д������һ���������������в��Ҿ����ĳ������
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include<stdio.h>//���ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//
//	
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] > k)//�Ա�
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;//�ҵ�������
//		}
//	}
//	if (left > right)//���±�������±�
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//		//��Ϣһ�룻
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ��������cls-��������ͷ�ļ�stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½����>
//��ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳����򡣣�
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("���������������������µ�¼��\n");
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
//#include<stdio.h>//���������������֣����Ӵ�С���У�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//�㷨ʵ�֣�a�����ֵ��b��֮��c����Сֵ
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

//#include<stdio.h>//ð������
//int main()
//{
//	int arr[] = { -2,5,4,6,3,8 };
//	int i = 0;
//	int j = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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
//#include<stdio.h>//дһ�������ӡ0-100֮������3�ı��������֣�
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
//#include<stdio.h>//���������������������������Լ����(շת�����)
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf_s("%d%d", &m, &n);//���벢ȡ��
//	while (m % n)
//	{
//		a = m % n;//ȡģ
//		m = n;
//		n = a;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>//��ӡ1000-2000�����꣬�����������
//int main()
//{
//	int year = 0;
//	int count = 0;//count���ڼ�������
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
//#include<stdio.h>//дһ�����룬��ӡ100-200֮���������
//int main()//�Գ��� --���Դ��ڶ�С�ڱ���������������Ϊ�㣬ֱ��������
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
//		if (a == b)//�ж�a�Ƿ�Ϊ������
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
///////һ�����ֿ���д��i=a*b����ôa/b��������һ������<=��ƽ��i���ٿ�ƽ��֮ǰ��һ���������Լ������������
//eg��16=2*8=4*4
//#include<stdio.h>//дһ�����룬��ӡ100-200֮���������
//#include<math.h>
//int main()//�Գ��� --���Դ��ڶ�С�ڱ���������������Ϊ�㣬ֱ��������
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{ 
//		for (b = 2; b <=sqrt(a); b++)//sqrt-��ƽ��--��⺯�� math
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b >sqrt(a))//�ж�a�Ƿ�Ϊ������
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//дһ�����룬��ӡ100-200֮���������
//#include<math.h>
//int main()//�Գ��� --���Դ��ڶ�С�ڱ���������������Ϊ�㣬ֱ��������
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b <= a/2; b++)//һ������ƽ����ȻС���������һ��
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > (a/2))//�ж�a�Ƿ�Ϊ������
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//дһ�����룬��ӡ100-200֮���������
//#include<math.h>
//int main()//�Գ��� --���Դ��ڶ�С�ڱ���������������Ϊ�㣬ֱ��������
//
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 101; a <= 200; a+=2)//ֱ�ӳ�ȥż������������Сһ��
//	{
//		for (b = 2; b <= a / 2; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (b > (a / 2))//�ж�a�Ƿ�Ϊ������
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<stdio.h>//��������ķ� ��������
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
//��дһ�δ��룬��һ��һ��һ�����ж��ٸ�9��
//#include<stdio.h>//���������10��9��ģ10��9��
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
//�����һ����������������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max) //����̨�㷨��
//		{
//			max = arr[i];//
//		}
//	}
//	printf("max=%d\n", max);
//}
//�˷��ھ����ӡ��
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//#include<stdio.h>
//int i = 1;
//int main()
//{
//	for (i = 1; i <= 9; i++)//��ӡ9�У�
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%2d��ʾ��ӡ��λ����%-2d��ʾ������루��λ����
//		}/////////��ӡһ��////////��,��,�˻�
//		printf("\n");
//		
//	}
//	return 0;
//}

