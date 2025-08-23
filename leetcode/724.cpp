#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
// Input: nums = [2,1,-1]
// Output: 0

int pivotIndex_bruteforce(vector<int>& nums) {
        int left=0;
        int right=0;
        vector<int> x;
        int tempx=-1;
        if(nums.size()==1)
            return 0;
        int temp=0;
        for(int i:nums)
        {
            x.push_back(i+temp);
            temp=x.back();
        }
        for(int i=0;i<x.size();i++)
        {
            right=x[i]-nums[i];
            left=x[x.size()-1]-x[i];
            if(left==right)
            {
                tempx=i;
                break;
            }

        }
        return tempx;
    }

int pivotIndex(vector<int>& nums)
{
    if(nums.size()==1)
            return 0;
    int left=0;
    int toplam=0;
    for(int i:nums)
    {
        toplam+=i;
    }
    left+=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(left==(toplam-nums[i]-left))
            return i;
        left+=nums[i];
    }
    return -1;
}

int main() {
    std::vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    int index1 = pivotIndex(nums1);
    std::cout << "Pivot index for {1, 7, 3, 6, 5, 6} is: " << index1 << std::endl; // Expected output: 3

    std::vector<int> nums2 = {1, 2, 3};
    int index2 = pivotIndex(nums2);
    std::cout << "Pivot index for {1, 2, 3} is: " << index2 << std::endl; // Expected output: -1

    std::vector<int> nums3 = {2, 1, -1};
    int index3 = pivotIndex(nums3);
    std::cout << "Pivot index for {2, 1, -1} is: " << index3 << std::endl; // Expected output: 0

    std::vector<int> nums4 = {0};
    int index4 = pivotIndex(nums4);
    std::cout << "Pivot index for {0} is: " << index4 << std::endl; // Expected output: 0

    return 0;
}