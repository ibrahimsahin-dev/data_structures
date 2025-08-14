#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
vector<int> productExceptSelf(vector<int>& nums) {
        int x=1;
        bool isnega=0;
        vector<int> a;
        for(int i: nums)
        {
            if(i!=0)
                x=x*i;
        }
        int i=0;
        while(i<nums.size())
        {
            int temp=0;
            int j=nums[i];
            if(j!=0)
            {
                if(j<0)
                {
                        isnega=1;
                        j=abs(j);
                    while(j<=x)
                    {
                        temp++;
                        j+=nums[i];
                    }
        }
        else{
                isnega=0;
                while(j<=x)
                {
                    temp++;
                    j+=nums[i];
                }
        }
            }
            else{
                temp=x;
            }
            if(isnega)
                a.push_back(-temp);
            else
                a.push_back(temp);
            i++;
        }
    return a;
    }
int main() {
    // Test etmek için örnek bir dizi
    std::vector<int> nums = {-1,1,0,-3,3};

    // Çözüm fonksiyonunu çağır
    std::vector<int> result = productExceptSelf(nums);

    // Sonucu ekrana yazdır
    std::cout << "Input: [1, 2, 3, 4]" << std::endl;
    std::cout << "Output: [";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    std::cout << "]" << std::endl; // Beklenen Çıktı: [24, 12, 8, 6]

    return 0;
}