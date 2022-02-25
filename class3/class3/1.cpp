#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n" ,sizeof(arr));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = ~a;//~按位 取反
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	printf(" % d", b); //-1
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = a++;//后置++  先使用 再++
//	int c = 10;
//	int d = ++c; //前置++  先++ 再使用
//	printf("a=%d b=%d \n", a, b);
//	printf("c=%d d=%d \n", c, d);
//	return 0;
//}
//int main() {
//	int a = (int)3.14; //double 类性强制转换成int
//	printf("a=%d  \n", a);
//	return 0;
//}
//int main() {
//	int a =3; //0为假 其他为真
//	int b = 5;
//	int c = a && b; //且 全为真才为真
//	printf("c=%d  \n", c);
//	int e = 0; //或 一个为真就为真
//	int f = 0;
//	int g = e && f;
//	printf("g=%d  \n", g);
//	return 0;
//}
//int main() {
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max=%d  \n", max);
//	return 0;
//}
//int main() {
//	//  int a = 10;//局部变量 -自动变量 （自动创建，自动删除）auto
//	  //register int b;//b定义成寄存器变量 频繁大量使用
//	int a = 10; //int定义的变量是有符号的  （signed）int (unsigned) int 无符号数
//	return 0;
//}
//int main() {
//	//typedef -类型重定义
//	typedef unsigned int u_int; //unsigned int重新起名 u_int
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//void test() {
//	static int a = 1;//静态局部变量
//	a++;
//	printf("a= %d \n", a);
//}
//int main() {
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main() {
//	extern int g_val;//声明外部符号
//	printf("g_val= %d\t",g_val);
//		return 0;
//}
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d \n",sum);
//	return 0;
//}
//#define MAX 100 //定义标识符常量
//int Max(int x, int y) { //函数的实现
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main() {
//	//int a = MAX;
//	//printf("a=%d \n", a);
//	int a = 10;
//	int b = 20;
//	//函数方式
//	int max = Max(a, b);
//	printf("max= %d \n", max);
//	//宏的方式 MAX(X,Y) (X>Y?X:Y)
//	max = MAX(a, b);
//	 
//	printf("max= %d \n", max);
//
//	return 0;
//}
//int main() {
//	int a = 10;
//	int *p = &a;
//	 //取出a的地址
//	//有一种变量是用来存放地址的- 指针变量
//	 //printf("%p\n",&a);
//	* p =20 ;//解应用操作
//	return 0;
//}
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}