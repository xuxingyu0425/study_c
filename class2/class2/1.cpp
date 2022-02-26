#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include<string.h>
//int main() {
//	//const int num = 4;//const 常属性
// //   //3;//字面常量
//	//printf("%d\n", num);
//	//num = 8;
//	 
//	/*printf("%d\n", num);
//	return 0;*/
//	const int n = 10; //n是变量 又具有常属性， 所以称n为常变量
//	int arr[n] = { 0 };
//
//}
//#define a 10
//int main() {
//	int arr[a]={0};
//	printf("%d\n", a);
//	return 0;
//}
//enum sex //枚举关键字enum
//{
//	male ,
//	female //枚举常量
//};
//int main() {
//	enum sex s = male;
//	printf("% d\n", s);
//	printf("% d\n", female);
//	return 0;
//}
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c',0};
//	printf("%d\n", strlen(arr1));//strlen -string length 计算字符串长度
//	printf("%d\n", strlen(arr2));//#include<string.h>
//}
//int main() {
//	printf("abc\nabc");//  \n转变 n 原本意思 为换行
//	return 0;
//}
//int main() {
//	 
//		printf("%d\n", strlen("abcdef"));  //6
//		// \62    \t被解析成一个转义字符
//		printf("%d\n", strlen("c:\test8\62\test.c")); //14
//	 
//	return 0;
//}
//int main() {
//	int input = 0;
//	printf("考上金科\n");
//	printf("你要好好学习吗？<1/0>\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("偷电缆\n");
//	return 0;
//
//}
//int main() {
//	int line = 0;
//	printf("考上研究生\n");
//	while (line < 5) {
//		printf("敲一万行代码\n");
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main() {
//	int num1 = 10;
//	int num2 = 10;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("%d\n", sum);
//	return 0;
//}
// 
//
//int main() {
//	int i = 0;
//	int arr[10]={  1,2,3,4,5,6,7,8,9,10 };
//	char ch[20];
//	float arr2[5];
//	printf("%d\n",arr[4]);//按下表访问
//	while(i<10) {  //循环打印
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	return 0;
//}


//操作符
//int main(){
//	int a = 5 % 2; //取余数  1
//	printf("%d\n", a);
//	return 0;
//
//}
//移位符
//int main(){
//	int a = 1; //  >> << 右移  左移 （2进制）位操作符
//	//整形1占4个字节  32个 bit
//	//0000000000000000000000000000001  左边丢弃右边补0
//	//0000000000000000000000000000010
//	int b =a << 1;  
//	printf("b=%d\n", b);
//	int c = a << 2;
//	printf("c=%d\n", c);//移俩位就是4
//	return 0;
//
//}
//位操作（2进制位）
//&按位 与
//|   或
//^   异或
//int main() {
//	int a = 3;  //011
//	int b = 5;  //101  与 都是1才为1   0为假 1为真
//	//            001 
//	int c = a&b;
//	int d = a | b; //或 一个是1即为1  0为假 1为真
//	//            111
//	int e = a ^ b;//110
//	printf("a&b=%d\n", c);
//	printf("a | b=%d\n", d);
//	printf("a ^ b=%d\n", e);
//	//异或 的 计算规律 对应二进制位相同为0 相异则为1
//
//	return 0;
//}
//赋值符
//int main() {
//	int a = 10; //赋值
//	//a = a + 10;
//	a += 10;
//	a   <<= 1;//复合赋值符
//	return 0;
//}
//单目操作符 一个操作数
//双目操作符 两个操作数
//三目操作符 三个操作数
//int main() {
//	int a = 10;// =dan  
//	int b = 20;
//	a + b;//+shuang
//	return 0;
//}
int main() {
	int a = 0;// =dan  
	 
	printf(" %d\n", a);
	printf(" %d\n", !a);//!真假转换
	return 0;
}