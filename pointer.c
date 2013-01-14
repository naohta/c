#include<stdio.h>

void main()
{
	int a=5;
	int *jusho;   //①ポインタ変数定義のアスタリスク

	jusho=&a;   // aのアドレスをjushoに格納

	printf("%d %d\n", jusho, &a);   //jushoにはaのアドレスが入っているはず。
	printf("%d\n", *jusho);   //②参照のアスタリスク

	*jusho = 7;   //③代入のアスタリスク

	printf("%d\n", a);   //aの値が変更されたはず。
}
