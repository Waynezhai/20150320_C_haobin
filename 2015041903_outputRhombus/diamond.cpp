#include <stdio.h>

int main(void)
{
	int N;//菱形的边长
	int n;//第n行
	int i;//第n行输出i个空格
	int j;//第n行输出j个*

	printf("Please input the length of diamond:N = ");
	scanf("%d", &N);

	//输出前N行
	for (n=1; n<=N; n++)
	{
		for(i=1; i<=N-n; i++)//输出前N行时，第n行有N-n个空格
			printf(" ");
		for (j=1; j<=2*n-1; j++)//输出前N行时，第n行有2n-1个*
			printf("*");
		printf("\n");
	}

	//输出第N+1行到第2N-1行
	for (n=N+1; n<=2*N-1; n++)
	{
		for(i=1; i<=n-N; i++)//输出第N+1行到第2N-1行时，第n行有n-N个空格
			printf(" ");
		for(j=1; j<=4*N-2*n-1; j++)//输出第N+1行到第2N-1时，第n行有4N-2n-1个*号【*号个数与每行的字符总量总量关系:2N-1 = 2(n-N)+x】
			printf("*");
		printf("\n");
	}
	
	return 0;
}

/**************************************************************************
时间：2015年4月19日21:55:37
目的：练习for循环
功能：输入菱形边长，输出菱形图案
其他：难点在于算法，弄清有几个变量几个常量
在VC中的输出结果为：
---------------------------------------------------------------------------
Please input the length of diamond:N = 15
              *
             ***
            *****
           *******
          *********
         ***********
        *************
       ***************
      *****************
     *******************
    *********************
   ***********************
  *************************
 ***************************
*****************************
 ***************************
  *************************
   ***********************
    *********************
     *******************
      *****************
       ***************
        *************
         ***********
          *********
           *******
            *****
             ***
              *
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/