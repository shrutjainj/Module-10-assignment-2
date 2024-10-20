/*There is an integer array nums sorted in non-decreasing order (not necessarily with
distinct values).
Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
< nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
[0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
[4,5,6,6,7,0,1,2,4,4] .
Given the array nums after the rotation and an integer target , return true if target is in
nums , or false if it is not in nums .
You must decrease the overall operation steps as much as possible.
Example 1:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 0, 1, 2};
    int a = 5;
    int pivot = -1;
    int lo = 0;
    int hi = 4;
    for(int i = 0; i < a; i++)
    {
        int midd = lo + (hi - lo);
        if(arr[midd] < arr[midd+1] && arr[midd]<arr[midd-1])
        {
            pivot = arr[midd];
            cout<<pivot;
        }
        else if(arr[midd] > arr[midd+1] && arr[midd]>arr[midd-1])
        {
            pivot = arr[midd + 1];
            cout<<pivot;
        }
        else if(arr[midd] > arr[hi])
        {
            lo = midd + 1;
        }
        else // arr[midd] < arr[hi]
        {
            hi = midd - 1;
        }
    }
}