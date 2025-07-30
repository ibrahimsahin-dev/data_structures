#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> don;
        
       for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Aynı i'yi atla

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {
            int toplam = nums[i] + nums[j] + nums[k];
            if (toplam == 0) {
                don.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            } else if (toplam < 0) {
                j++;
            } else {
                k--;
            }
        }
    }

        return don;
    }

int main() {
    // Test için bir örnek vektör oluşturalım.
    std::vector<int> nums = { -1, 0, 1, 2, -1, -4 };

    // Fonksiyonunu çağırıp sonucu alalım.
    std::vector<std::vector<int>> result = threeSum(nums);

    // Sonucu ekrana yazdıralım.
    std::cout << "Bulunan ucluler:" << std::endl;
    if (result.empty()) {
        std::cout << "Herhangi bir uclu bulunamadi." << std::endl;
    } else {
        for (const auto& triplet : result) {
            std::cout << "[ ";
            for (int num : triplet) {
                std::cout << num << " ";
            }
            std::cout << "]" << std::endl;
        }
    }

    return 0;
}