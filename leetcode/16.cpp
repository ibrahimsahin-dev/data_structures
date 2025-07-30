#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0;
        int size=nums.size();
        int tar=target;
        int mostapp=nums[0]+nums[1]+nums[2];
        vector<int> x;
        while(i<size)
        {
            int j=i+1;
            int k=size-1;
            
            while(j<k){
                int hedef=nums[j]+nums[k]+nums[i];
                if(hedef>=target)
                {
                    x.push_back(hedef);
                    j++;
                }
                else{
                    x.push_back(hedef);
                    k--;
                }
                
            }
            i++;
        }
       int calc=x[0];
       for(int i: x)
       {
        if(i-target==0)
        {
            return i;
        }
        else if(i-calc<target)
        {
            
        }
       }
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