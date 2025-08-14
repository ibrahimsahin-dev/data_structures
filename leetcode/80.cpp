#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3,_]


int removeDuplicates(vector<int>& nums) {
    int counter=0;
    int tut=nums[0];
    if(nums.size()==1)
        return 1;
    for(int i =1;i<nums.size();i++)
    {
        if(nums[i]==tut && counter==1)
        {
            nums[i]=INT_MAX;
        }
        else if (nums[i]==tut && counter!=1)
        {
            counter++;
        }
        else{
            counter=0;
            tut=nums[i];
        }
    }
    sort(nums.begin(),nums.end());
    int i=nums.size()-1;
    while(nums[i]==INT_MAX)
    {
        nums.pop_back();
        i--;
    }
    return nums.size();
    }
    int main()
    {
        vector<int> x={1,1};
        cout<<removeDuplicates(x);
    }