#include<iostream>
using namespace std;
int reve(int n)
{
    if(n<=0) return 0;
    int s = 0;
    s = s * 10 + reve(n%10);
    return s;
}
int main()
{
    cout<<reve(12348);
}