#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        
        vector<int> vec;
        if(nums.size()==1)
            return 1;
        int i=0;
        while(i<nums.size()-1)
        {
            if(vec.empty())
                {
                    vec.push_back(nums[i]);
                }
            else{
                if(nums[i]!=nums[i+1])
                {
                    vec.push_back(nums[i+1]);
                }
                i++;
            }
        }
        
        
        nums=vec;
        return vec.size();
    }

    int main() {
    // Test Durumu 1
    std::vector<int> nums1 = {1, 1, 2};
    std::cout << "Orijinal Vektor: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int k1 = removeDuplicates(nums1); // Fonksiyonu çağır

    std::cout << "Fonksiyondan donen yeni uzunluk: " << k1 << std::endl;
    std::cout << "Degistirilmis Vektorun ilk " << k1 << " elemani: ";
    for (int i = 0; i < k1; i++) {
        std::cout << nums1[i] << " ";
    }
    std::cout << "\n----------------------------------------\n";

    // Test Durumu 2
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::cout << "Orijinal Vektor: ";
    for (int num : nums2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    int k2 = removeDuplicates(nums2); // Fonksiyonu çağır

    std::cout << "Fonksiyondan donen yeni uzunluk: " << k2 << std::endl;
    std::cout << "Degistirilmis Vektorun ilk " << k2 << " elemani: ";
    for (int i = 0; i < k2; i++) {
        std::cout << nums2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}