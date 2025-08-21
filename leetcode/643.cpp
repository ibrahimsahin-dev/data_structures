#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
        double toplam=0;
        for(int i=0;i<k;i++)
        {
            toplam+=nums[i];
        }
        double current_sum=toplam;
        for(int i=1;i<nums.size()-k+1;i++)
        {
            current_sum=current_sum-nums[i-1]+nums[i+k-1];
            if(current_sum>toplam)
                toplam=current_sum;
            
        }
        return double(toplam/k);
    }
int main()
{
    vector<int> x={1,12,-5,-6,50,3};
    cout<<findMaxAverage(x,4);
}