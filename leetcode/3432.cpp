#include <bits/stdc++.h>
using namespace std;

int countPartitions(vector<int>& nums) {
        int top=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            top+=nums[i];
        }
        int res=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            res+=nums[i];
            if((res%2==0 && (top-res)%2==0) || (res%2!=0 && (top-res)%2!=0))
            {
                count++;
            }
            
        }
        return count;
    }