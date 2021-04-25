// 三数之和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define N 5

int main()
{
	int num[N], m, i, j, k;
	printf("请输入一个整数数组:\n");
	for (m = 0;m < N;m++)
		scanf_s("%d", &num[m]);
	for (i = 0;i < N;i++)
		for (j = 1;j < N;j++)
			for (k = 2;k < N;k++)
			{
				if (num[i] + num[j] + num[k] == 0 && i != j && j != k && i != k)
				{
					printf("answer is :[%d,%d,%d]\n", num[i] , num[j] , num[k]);
					break;
				}
			}
}//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
