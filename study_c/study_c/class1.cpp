#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 
//int main() 
//{ 
//	extern int g_val;
//	printf("g_val= %d \n" , g_val);
//	return 0;
//
//}
int main() {
	{
		int a = 10;
		printf("a= %d\n", a); //ok
	}
//	printf("a= %d\n", a); //error
	return 0;
}