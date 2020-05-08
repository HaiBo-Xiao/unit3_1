// unit3_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

float Convert(float TempFer) {
    float C;
    C = (TempFer - 32) * 5 / 9;
    return C;
};
int fib(int n);

int main()
{
    float F, C;
    cout << "请输入华氏温度";
    cin >> F;
    C = Convert(F);
    cout << "摄氏温度为 " << C << endl;

    int n;
    cout << "请输入所求斐波那契数列项数";
    cin >> n;
    cout << "所求项为" << fib(n);
    return 0;

}

int fib(int n) {
    if (n < 1)cout << "n的值非法";
    if (0 < n && n < 3) {
        cout << "调用了fib（1）"<<endl;
        return 1;
    }
    if (2 < n) {
        cout << "调用了fib（" << n - 1<<"）和fib（"<<n - 2<<"）"<<endl;
        return fib(n - 1) + fib(n - 2);
    }
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
