#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include<string.h>
//int main() {
//	//const int num = 4;//const ������
// //   //3;//���泣��
//	//printf("%d\n", num);
//	//num = 8;
//	 
//	/*printf("%d\n", num);
//	return 0;*/
//	const int n = 10; //n�Ǳ��� �־��г����ԣ� ���Գ�nΪ������
//	int arr[n] = { 0 };
//
//}
//#define a 10
//int main() {
//	int arr[a]={0};
//	printf("%d\n", a);
//	return 0;
//}
//enum sex //ö�ٹؼ���enum
//{
//	male ,
//	female //ö�ٳ���
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
//	printf("%d\n", strlen(arr1));//strlen -string length �����ַ�������
//	printf("%d\n", strlen(arr2));//#include<string.h>
//}
//int main() {
//	printf("abc\nabc");//  \nת�� n ԭ����˼ Ϊ����
//	return 0;
//}
//int main() {
//	 
//		printf("%d\n", strlen("abcdef"));  //6
//		// \62    \t��������һ��ת���ַ�
//		printf("%d\n", strlen("c:\test8\62\test.c")); //14
//	 
//	return 0;
//}
//int main() {
//	int input = 0;
//	printf("���Ͻ��\n");
//	printf("��Ҫ�ú�ѧϰ��<1/0>\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("͵����\n");
//	return 0;
//
//}
//int main() {
//	int line = 0;
//	printf("�����о���\n");
//	while (line < 5) {
//		printf("��һ���д���\n");
//		line++;
//	}
//	printf("��offer\n");
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
//	printf("%d\n",arr[4]);//���±����
//	while(i<10) {  //ѭ����ӡ
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	return 0;
//}


//������
//int main(){
//	int a = 5 % 2; //ȡ����  1
//	printf("%d\n", a);
//	return 0;
//
//}
//��λ��
//int main(){
//	int a = 1; //  >> << ����  ���� ��2���ƣ�λ������
//	//����1ռ4���ֽ�  32�� bit
//	//0000000000000000000000000000001  ��߶����ұ߲�0
//	//0000000000000000000000000000010
//	int b =a << 1;  
//	printf("b=%d\n", b);
//	int c = a << 2;
//	printf("c=%d\n", c);//����λ����4
//	return 0;
//
//}
//λ������2����λ��
//&��λ ��
//|   ��
//^   ���
//int main() {
//	int a = 3;  //011
//	int b = 5;  //101  �� ����1��Ϊ1   0Ϊ�� 1Ϊ��
//	//            001 
//	int c = a&b;
//	int d = a | b; //�� һ����1��Ϊ1  0Ϊ�� 1Ϊ��
//	//            111
//	int e = a ^ b;//110
//	printf("a&b=%d\n", c);
//	printf("a | b=%d\n", d);
//	printf("a ^ b=%d\n", e);
//	//��� �� ������� ��Ӧ������λ��ͬΪ0 ������Ϊ1
//
//	return 0;
//}
//��ֵ��
//int main() {
//	int a = 10; //��ֵ
//	//a = a + 10;
//	a += 10;
//	a   <<= 1;//���ϸ�ֵ��
//	return 0;
//}
//��Ŀ������ һ��������
//˫Ŀ������ ����������
//��Ŀ������ ����������
//int main() {
//	int a = 10;// =dan  
//	int b = 20;
//	a + b;//+shuang
//	return 0;
//}
int main() {
	int a = 0;// =dan  
	 
	printf(" %d\n", a);
	printf(" %d\n", !a);//!���ת��
	return 0;
}