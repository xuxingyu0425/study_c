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
//	int b = ~a;//~��λ ȡ��
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	printf(" % d", b); //-1
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = a++;//����++  ��ʹ�� ��++
//	int c = 10;
//	int d = ++c; //ǰ��++  ��++ ��ʹ��
//	printf("a=%d b=%d \n", a, b);
//	printf("c=%d d=%d \n", c, d);
//	return 0;
//}
//int main() {
//	int a = (int)3.14; //double ����ǿ��ת����int
//	printf("a=%d  \n", a);
//	return 0;
//}
//int main() {
//	int a =3; //0Ϊ�� ����Ϊ��
//	int b = 5;
//	int c = a && b; //�� ȫΪ���Ϊ��
//	printf("c=%d  \n", c);
//	int e = 0; //�� һ��Ϊ���Ϊ��
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
//	//  int a = 10;//�ֲ����� -�Զ����� ���Զ��������Զ�ɾ����auto
//	  //register int b;//b����ɼĴ������� Ƶ������ʹ��
//	int a = 10; //int����ı������з��ŵ�  ��signed��int (unsigned) int �޷�����
//	return 0;
//}
//int main() {
//	//typedef -�����ض���
//	typedef unsigned int u_int; //unsigned int�������� u_int
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//void test() {
//	static int a = 1;//��̬�ֲ�����
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
//	extern int g_val;//�����ⲿ����
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
//#define MAX 100 //�����ʶ������
//int Max(int x, int y) { //������ʵ��
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
//	//������ʽ
//	int max = Max(a, b);
//	printf("max= %d \n", max);
//	//��ķ�ʽ MAX(X,Y) (X>Y?X:Y)
//	max = MAX(a, b);
//	 
//	printf("max= %d \n", max);
//
//	return 0;
//}
//int main() {
//	int a = 10;
//	int *p = &a;
//	 //ȡ��a�ĵ�ַ
//	//��һ�ֱ�����������ŵ�ַ��- ָ�����
//	 //printf("%p\n",&a);
//	* p =20 ;//��Ӧ�ò���
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