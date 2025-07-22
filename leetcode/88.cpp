#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> myvec;
        /*
        Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
        Output: [1,2,2,3,5,6]
        */
       int i=0;
       int j=0;
       while(m-i>0 || n-j>0){
        if(m-i!=0 && n-j!=0){
        if(nums1[i]>=nums2[j]){
            myvec.push_back(nums2[j]);
            j++;
            continue;
        }
        if(nums1[i]<nums2[j]){
            myvec.push_back(nums1[i]);
            i++;
            continue;
        }
    }
    
        if(m-i>0){
            myvec.push_back(nums1[i]);
            i++;
        }
        if(n-j>0){
            myvec.push_back(nums2[j]);
            j++;
        }
       }
       nums1=myvec;
       
    }
int main() {
    vector<int> nums1 = {1};
    int m = 1;
    vector<int> nums2 = {};
    int n = 0;

    merge(nums1, m, nums2, n);

    for(int num : nums1) {
        cout << num << " ";
    }

    return 0;
}