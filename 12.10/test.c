#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 0;i < 2;i++)
//	{
//		printf("     **     ");
//		printf("\n");
//
//	}
//	for (i = 0;i < 2;i++)
//	{
//		printf("************");
//		printf("\n");
//	}
//	for (i = 0;i < 2;i++)
//	{
//		printf("    *  *    ");
//		printf("\n");
//	}
//
//
//
//	
//	 
//
//	return 0;
//}
//void Print_8(int n)
//{
//	if (n > 7)
//	{
//		Print_8(n / 8);
//	}
//	printf("%o", n % 8);
//}
//void Print_16(int n)
//{
//	if (n > 15)
//	{
//		Print_16(n / 16);
//	}
//	printf("%X", n % 16);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Print_8(n);
//	Print_16(n);
//	return 0;
//}
//include <stdio.h>
//int main()
//{	int a;
//    scanf("%d", &a); 
//   
//    printf("0%o 0X%X", a, a);//使用格式控制符输出八进制和十六进制 
//    return 0;
//}
//int main()
//{
//    int a = 1234;
//  /*  scanf("%d", &a);*/
//    printf("%#o %#X", a, a);
//    return 0;
// 
//}
//#include <math.h>
//int main()
//{
//	int a = 0XABCDEF;
//	long  sum = 0;
//	int i;
//	for (i = 0;i < 6;i++)
//	{
//		sum =sum+(15-i)*pow(16, i);
//		
//	}
//	printf("%ld", sum);
//	
//	return 0;
//
//}
//#include <string.h>
//int main()
//{
//	char arr[] = "Hello world!";
//	printf("%s", arr);
//	printf("\n");
//	int len = strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n");
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d",a,b,c);
//
//	return 0;
//}
//int main()
//{
//	
//	
//		int n;
//		float a = 0.0;
//		float b = 0.0;
//		float c = 0.0;
//		scanf("%d;%f,%f,%f", &n, &a, &b, &c);
//		printf("The each subiect score of No. %d is %.2f, %.2f, %.2f", n, a, b, c);
//	
//	return 0;
//	/*int id = 0;
//	float c = 0.0;
//	float math = 0.0;
//	float english = 0.0;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);
//	return 0;*/
//}
//     

//int main()
//{
//	char arr;
//	scanf("%c", &arr);
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		int j;
//		for (j = 0;j < 4-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j <=i;j++)
//		{
//			printf("%c ", arr);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	//数字怎么转化为对应的字符？
//	int a, b, c, d, e, f, g, h, j, m, x, y;
//	a = 73;
//	b = 32;
//	c = 99;
//	d = 97;
//	e = 110;
//	m = 32;
//	f = 100;
//	g = 111;
//	h = 32;
//	j = 105;
//	x = 116;
//	y = 33;
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c", a, b, c, d, e, m, f, g, h, j, x, y);
//	return 0;
//}
int main()
{
	int year, month, week;
	scanf("%4d%2d%2d", &year, &month, &week);
	printf("year=%4d\n", year);
	printf("month=%02d\n", month);
	printf("week=%2d\n", week);
	return 0;
}