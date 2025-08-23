#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
<<<<<<< HEAD
vector<vector<int>> x;
vector<int> elde;
    void rec(vector<int> nums, bool used[])
    {
        if(nums.size()==elde.size())
        {
            x.push_back(elde);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!used[i])
            {
                used[i]=1;
                elde.push_back(nums[i]);
                rec(nums,used);
                elde.pop_back();
                used[i]=0;
            }
        }
    }
    void nextPermutation(vector<int>& nums) {
        bool used[nums.size()]{0};
        rec(nums,used);
    }
int main()
{
    vector<int> nums={1,2,3};
    nextPermutation(nums);
    elde=x[1];
    for(int i:elde)
    {
        cout<<i<<endl;
    }
}
=======
vector<string> letterCombinations(string digits) {
        int i,j,k;
        i=j=k=0;
        
        
    }
>>>>>>> c1444cf6621521d75caf5964d4eca2a82e8d3434
