// 二进制求和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int two_ten(char a[])
{
    int ten = 0, i = 1,j= strlen(a) - 1;
    for (;j >= 0;j--)
    {
        ten +=(a[j]-'0') * i;
        i *= 2;
    }
    return ten;
}

int ten_two(int n)
{
    if (n < 2)
        return n;
    else
    {
        return ten_two(n / 2) * 10 + n % 2;
    }
}

int main()
{
    char m[20] , n[20] ;
    printf("输入两个二进制字符串:\n");
    gets_s(m);
    gets_s(n);
    int t1, t2,t,sum_two;
    t1 = two_ten(m);
    t2 = two_ten(n);
    t = t1 + t2;
    sum_two = ten_two(t);
    printf("二进制和为：%d\n",sum_two);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
