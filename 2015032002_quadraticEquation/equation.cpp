#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 0, b = 0, c = 0;
	double delta = 0;
	double x1 = 0, x2 = 0;
/*****************************
	a = 1;
	b = 5;
	c = 6;
/*****************************/
	printf("请依次输入系数:a/b/c，并以空格隔开：\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	//scanf("%lf", &a);
	//scanf("%lf", &b);
	//scanf("%lf", &c);
	printf("a = %lf; b = %lf; c = %lf\n", a, b, c);

	delta = b*b - 4*a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("该方程有两个不同根:\n");
		printf("x1 = %f; x2 = %f\n",x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b)/(2*a);
		x2 = x1,
		printf("该方程有两个相同根:\n");
		printf("x1 = x2 = %f\n", x1);
	}
	else
		printf("该方程无实数根\n");

	return 0;
}

/*******************************************
时间：2015年3月31日22:55:33
目的：练写一个程序
功能：二元一次方程输入系数求根
其他：如果将系数的类型规定为整型则输出结果会出错
VC中的输出结果：
--------------------------------------------
	请依次输入系数:a/b/c，并以空格隔开：
	1 -10 25
	a = 1.000000; b = -10.000000; c = 25.000000
	该方程有两个相同根:
	x1 = x2 = 5.000000
	Press any key to continue
--------------------------------------------
*******************************************/
