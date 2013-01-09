#include<stdio.h>
/*作成者：1T3(29)　橋本顕成*/
/*課題:CL_K01_1*/
void main(void){
	int sum,a,b,c;
	double ave;
	printf("1つ目の数字を入力してください");
	scanf("%d",&a);
	printf("2つ目の数字を入力してください");
	scanf("%d",&b);
	sum = a + b;
	c = a * b;
	ave = (a + b)/2;
	printf("%dと%dを足した値は%dです。\n",a,b,sum);
	printf("%dと%dをかけた値は%dです。\n",a,b,c);
	printf("%dと%dをかけた値は%fです。\n",a,b,ave);
}
