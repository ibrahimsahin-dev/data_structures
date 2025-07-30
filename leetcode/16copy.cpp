#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
 
    sort(nums.begin(), nums.end());
    int maxapp=nums[0]+nums[1]+nums[2]-target;
    int minapp=nums[0]+nums[1]+nums[2];
    for(int i=0; i<nums.size();i++)
    {
        int j=i+1;
        int k=nums.size()-1;
        while(j<k){
            int hedef=nums[i]+nums[j]+nums[k];
            if(hedef>target)
            {
                if(hedef-target<maxapp)
                    maxapp=hedef-target;
                k--;
            }
            else{
                if(target-hedef<maxapp)
                    maxapp=hedef-target;
                j++;

            }
        }
    }
    return maxapp;
}












int main() {
    // Örnek 1
    std::vector<int> nums1 = {-1, 2, 1, -4};
    int target1 = 1;
    int result1 = threeSumClosest(nums1, target1);
    std::cout << "Ornek 1: [-1, 2, 1, -4], target = 1" << std::endl;
    std::cout << "Kodunun urettigi sonuc: " << result1 << std::endl;
    std::cout << "------------------------------------" << std::endl;

    // Örnek 2
    std::vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    int result2 = threeSumClosest(nums2, target2);
    std::cout << "Ornek 2: [0, 0, 0], target = 1" << std::endl;
    std::cout << "Kodunun urettigi sonuc: " << result2 << std::endl;

    return 0;
}