#include<iostream>
using namespace std;
int n, a[1030] = {1};  // 数组 a 存储当前行的组合数模 2 结果，初始只有 a[0]=1
int main() {
    cin >> n;
    for (int i = 0; i < (1 << n); ++i) 
    {          // 共 2^n 行
        for (int j = 1; j < (1 << n) - i; ++j)    // 输出前导空格，使图案居中
            cout << " ";
        for (int j = i; j >0; --j)              // 更新数组 a，模拟杨辉三角的异或递推
            a[j] ^= a[j - 1];                      // 位与运算
        if (!(i % 2))                              // i 为偶数（奇数行，从0开始）
            for (int j = 0; j <= i; ++j)
                cout << (a[j] ? "/\\" : "  ");    // 输出三角形的上半部分
        else                                       // i 为奇数（偶数行）
            for (int j = 0; j <= i; j += 2)
                cout << (a[j] ? "/__\\" : "    "); // 输出三角形的下半部分
        cout << endl;
    }
    return 0;
}