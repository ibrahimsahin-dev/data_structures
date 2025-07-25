#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// they wants O(logn)
//sorted array 
int searchInsert(vector<int>& nums, int target) {
        int i= 0;
        int size=nums.size();
        while(i<size){
            int orta = size/2;
            if(target==nums[orta]){
                return orta;
            }
            else if(target<nums[orta]){

            }
        }
    }