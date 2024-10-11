/*You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true*/
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int m = 3;
    int n = 4;
    int lo = 0;
    int hi = 3;
    int target = 3;
    bool flag = false;
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; i<n; j++)
        {
            int midd = lo + (hi - lo);
            if(arr[i][midd] ==  target)
            {
                flag = true;
                cout<<"True";
            }
            else if(arr[i][midd] > target)
            {
                hi = midd - 1;
            }
            else // (arr[i][midd] < target)
            {
                lo = midd + 1;
            }
        }
    }
    if(flag == false)
    {
        cout<<"False";
    }
}