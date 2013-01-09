#include<stdio.h>
/*作成者：1T3(29)　橋本顕成*/
/*課題:CL_K01_1*/
void main(void){
	int sum,a,b;
	printf("1つ目の数字を入力してください");
	scanf("%d",&a);
	printf("2つ目の数字を入力してください");
	scanf("%d",&b);
	sum = a + b;
	printf("%dと%dを足した値は%dです。\n",a,b,sum);
}
