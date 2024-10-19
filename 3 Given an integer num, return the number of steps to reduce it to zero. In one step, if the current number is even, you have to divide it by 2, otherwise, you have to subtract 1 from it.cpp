class Solution {
public:
    int numberOfSteps(int num) {
        if(num%2 == 0)
        {
            numberOfSteps(num/2);
        }
        else if(num%2 != 0)
        {
            numberOfSteps(num - 1);
        }
        else
        {
            return 0;
        }
        return numberOfSteps(num);
    }
};
/* 4 
if n = 4 then n = 1/