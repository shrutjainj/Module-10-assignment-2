#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1) return 1;
    int a = 0;
    a = a + sum(n%10);
    return a;
}
int main()
{
    cout<<sum(23547);
}