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
        vector<int> dizi;
        while(i<size)
        {
            int j=i+1;
            int k=size-1;
            
            while(j<k){
                int hedef=nums[j]+nums[k]+nums[i];
                
                if(hedef==target)
                {
                    return hedef;
                }
                else if(hedef>target)
                {
                    k--;
                    
                }
                else if(hedef<target)
                {
                    j++;
                    
                }
                dizi.push_back(hedef);
            }
            i++;
        }
    int fark=2147483647;
    i=0;
    int smallest_number_index = 0;
    while(i<dizi.size())
    {
        int x = abs(dizi[i] - target);
        if (x < fark)
        {
            fark=x;
            smallest_number_index = i;
        }
        i++;
    }
    return dizi[smallest_number_index];
    
    }

    int main() {
    // Örnek 1
    std::vector<int> nums1 = {10,20,30,40};
    int target1 = 1;
    int result1 = threeSumClosest(nums1, target1);
    std::cout << "Ornek 1: [-1, 2, 1, -4], target = 1" << std::endl;
    //-4 -1 1 2
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