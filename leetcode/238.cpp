#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
vector<int> productExceptSelf(vector<int>& nums) {
        
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