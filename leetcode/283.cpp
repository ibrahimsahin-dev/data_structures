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
                if(nums[i]!=0)
                {
                    i++;
                    j=i;
                }
                else if(nums[i]==0 && nums[j]==0)
                {
                    j++;
                }
                else if(nums[i]==0 && nums[j]!=0)
                {
                    int x=nums[i];
                    nums[i]=nums[j];
                    nums[j]=x;
                    i++;
                    j=i;
                }
            }
    }