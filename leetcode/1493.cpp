#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
int longestSubarray_bruteforce(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int left_zero_index=0;
        bool zero_count=0;
        int longest=0;
        int net=0;
        bool here=0;
        for(int i=0;i<nums.size();i++)
        {
            if(zero_count)
            {
                i=left_zero_index;
                zero_count=0;
                longest=1;
                here=1;
            }
            else if(nums[i]==0)
            {
                zero_count=1;
                longest++;
                left_zero_index=i;
                here=1;
            }
            else{
                longest++;
            }
            if(longest>net)
                net=longest;
        }
        if(here)
            return net;
        else
            return nums.size()-1;
    }
    int longestSubarray(vector<int>& nums)
    {
        int start_index=0;
        int max_size=0;
        int zeros_count=0;
        for(int end=0;end<nums.size();end++)
        {
            if(nums[end]==0)
                zeros_count++;
            while(zeros_count>1)
            {
                if(nums[start_index]==0)
                    zeros_count--;
                start_index++;
            }
            max_size=max(max_size,end-start_index+1);
        }
        if(zeros_count==0)
            return nums.size()-1;
        else
            return max_size;
    }