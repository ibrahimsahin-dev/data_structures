#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<=2)
            return false;
        int max=INT_MIN;
        int min=INT_MAX;
        int number;
        for(int i=0;i<nums.size();i++)
        {
          if(min>nums[i])
        {
          
            min=nums[i];
        }
        else{
            if(max<nums[i])
            {
                
                max=nums[i];
            }
            if(max>nums[i]&& nums[i]>min)
                number=nums[i];
        }

        if(max>number && number>min)
            return true;

        }
    return false;
    }
    int main()
    {
        vector<int> x= {2,4,-2,-3};
        cout<<increasingTriplet(x);
    }