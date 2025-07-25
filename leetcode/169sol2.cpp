#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=1;
        int temp=1;
        int i=0;
        while(i+1<nums.size()){
           
            if(nums[i]==nums[i+1]){
                max++;
            }
            else{
                if(max>temp){
                temp=max;
                }
                max=0;
            }
            i++;
        }
        if(nums[i]==nums[i-1]){
                max++;}
        if(max>temp){
                temp=max;
                }
        return temp;
        
    }
    int main()
{
    vector<int> x={1,2,1,2,1,1};
    cout<<majorityElement(x);
    return 0;
}