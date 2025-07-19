#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        
        for(int i: nums)
        {
            int count=1;
            for(int j: nums){
                if(i==j){
                    count++;
                }
                if(count>=2)
                {
                    i++;
                }
            }
        }
    }