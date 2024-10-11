#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,4,567,64,7,46,4644,63,63,386,76,365,36, 6789};
    int lo = 0;
    int hi = 2;
    int target = 5;
    int flag = false;
    if(arr[hi] < target)
    {
        lo = hi;
        hi = hi * 2;
    }
    while(lo<hi)
    {
        int midd = lo + (hi - lo);
        if(arr[midd] == target)
        {
            cout<<"it is good int";
            flag = true;
        }
        else if(arr[midd] > target)
        {
            hi = midd - 1;
        }
        else
        {
            lo = midd + 1;
        }
    }
    if(flag == false)
    {
        cout<<"It is absent from there";
    }
}