#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


// Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
// Output: 10
// Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
int longestOnes(vector<int>& nums, int k) {
       int left=0;
       int zero_count=0;
       int net=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==0)
            zero_count++;
        while(zero_count>k)
        {
            if(nums[left]==0)
                zero_count--;
            left++;
        }
        if(i-left+1>net)
            net=i-left+1;
       }
       return net;
    }
int main()
{
    vector<int> x={0,0,1,1,1,0,0};

    cout<<longestOnes(x,0);
}