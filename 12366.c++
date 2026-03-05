#include <bits/stdc++.h>       
using namespace std;
int shuwei(int x) 
{
    int num = 0;
    while (x >= 10) 
    {
        num += x % 10;
        x /= 10;
    }
    num += x;
    return num;
}

bool compare(int a, int b) 
{
    int sa = shuwei(a);
    int sb = shuwei(b);
    if(sa<sb ||(sa==sb &&a<b))
        return true;
    else
        return false;
}

void quickSort(int al[], int low, int high) 
{
    if (low >= high) return;

    int r = low + rand() % (high - low + 1);
    swap(al[low], al[r]);
    int i = low, j = high;
    int key=al[i];
    while (i < j) 
    {
        while (i < j && !compare(al[j], key)) 
            j--;
        swap(al[i],al[j]);
        while (i < j && (compare(al[i], key)||al[i]==key))  
            i++;
        swap(al[i],al[j]);
    }
    quickSort(al, low, i - 1);
    quickSort(al, j+ 1, high);
}

int main() 
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n+5);
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;

    quickSort(a.data(), 0, n - 1);
    cout << a[m - 1];
    return 0;
}