#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            if(nums[j]==0)
            {
                j++;
                continue;
            }
            else{
                if(nums[i]!=0 && i>1)
                {
                    i++;
                    continue;
                }
                else{
                    int x=nums[i];
                    nums[i]=nums[j];
                    nums[j]=x;
                    i++;
                    j++;
            }
        }
    }
}

