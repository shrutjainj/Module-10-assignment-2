#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[] = {1,23,5,7,96,564,747,46,75,45};
    int n = 10;
    int lo = 0;
    int hi = 10;
    int target = 2;
    bool a = false;
    for(int i = 0; i<n; i++)
    {
        int midd = lo + (hi - lo);
        if(arr[midd] == target)
        {
            cout<<" Number is present there "<<target;
            a = true;
        }
        else if(arr[midd] < target)
        {
            lo = midd + 1;
        }
        else // arr[midd] > target
        {
            hi = midd - 1;
        }
    }
    if(a == !true)
    cout<<"It is absent there "<<target;
}