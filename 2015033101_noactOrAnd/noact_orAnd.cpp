#include <stdio.h>

int main(void)
{
	int k = 20;
	int m;

	printf("逻辑与的左边为假则右边表达式不执行:\n");
	m = (1>2) && (k=5);
	printf("m = %d; k = %d\n", m, k);

	k =20;
	printf("逻辑或的左边为真则右边表达式不执行:\n");
	m = (1>2) || (k=5);
	printf("m = %d; k = %d\n", m, k);

	return 0;
}

/*********************************
时间：2015年3月31日22:11:25
目的：测试逻辑与和逻辑或左边表达式为真还是假时右边表达式不执行
功能：检测逻辑运算符
结果：
----------------------------------
	逻辑与的左边为假则右边表达式不执行:
	m = 0; k = 20
	逻辑或的左边为真则右边表达式不执行:
	m = 1; k = 5
	Press any key to continue
----------------------------------
*********************************/