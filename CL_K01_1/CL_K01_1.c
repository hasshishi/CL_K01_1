#include<stdio.h>
/*�쐬�ҁF1T3(29)�@���{����*/
/*�ۑ�:CL_K01_1*/
void main(void){
	int sum,a,b,c;
	double ave;
	printf("1�ڂ̐�������͂��Ă�������");
	scanf("%d",&a);
	printf("2�ڂ̐�������͂��Ă�������");
	scanf("%d",&b);
	sum = a + b;
	c = a * b;
	ave = (a + b)/2;
	printf("%d��%d�𑫂����l��%d�ł��B\n",a,b,sum);
	printf("%d��%d���������l��%d�ł��B\n",a,b,c);
	printf("%d��%d���������l��%f�ł��B\n",a,b,ave);
}
