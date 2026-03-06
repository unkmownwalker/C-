#include<bits/stdc++.h>  
using namespace std;
struct student
{
   char name[21];
   int year,month,day,id;
};
student a[101];
bool cmp(student &x,student &y)
{
   if (x.year != y.year) return x.year < y.year;
   if (x.month != y.month) return x.month < y.month;
   if (x.day != y.day) return x.day < y.day;
   return x.id > y.id;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i].name >> a[i].year >> a[i].month >> a[i].day;
        a[i].id=i;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++) 
        cout << a[i].name << endl;
    return 0;
 
}