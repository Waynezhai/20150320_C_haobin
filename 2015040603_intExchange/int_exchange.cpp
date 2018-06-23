#include <stdio.h>

int main(void)
{
	int i =3, j = 5;
	int t;

	printf("Befor exchanging:\n");
	printf("i = %d, j = %d\n", i, j);
	t = i;
	i = j;
	j = t;
	printf("After exchanging:\n");
	printf("i = %d, j = %d\n", i, j);
	return 0;
}

/**************************************************************************
时间：2015年4月6日20:09:04
目的：验证两个数值的互换
功能：数值互换
其他：注意三个表达式的先后顺序
在VC中的输出结果为：
---------------------------------------------------------------------------
Befor exchanging:
i = 3, j = 5
After exchanging:
i = 5, j = 3
Press any key to continue
---------------------------------------------------------------------------
**************************************************************************/
