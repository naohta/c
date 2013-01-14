#include<stdio.h>

void main()
{
	int a=5;
        int * jusho;

	jusho=&a;   // aのアドレスをjushoに格納

	printf("%d %d\n", jusho, &a);   //jushoにはaのアドレスが入っているはず。
	printf("%d\n", *jusho);   //②参照のアスタリスク

	//*jusho = 7;   //③代入のアスタリスク

	printf("%d\n", a);   //aの値が変更されたはず。


	int A[4]={10, 20, 30, 40};

	printf("wooou0\n");
	printf("%d %d %d %d\n", A[0], A[1], A[2], A[3]);
	printf("wooou1\n");
	printf("%d %d %d %d\n", &A[0], &A[1], &A[2], &A[3]);
	printf("wooou2\n");
	printf("%d\n", A);
	printf("wooou3\n");
}

