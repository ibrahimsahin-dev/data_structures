#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        for(int i : nums)
        {
            for(int j: nums)
            {
                if(i==j)
                {
                    count++;
                    if(count>(size/2))
                    {
                        return i;
                    }
                }
            }
            count==0;
        }
        return 0;
    }
int main()
{
    vector<int> x={1,2,1,2,1};
    cout<<majorityElement(x);
    return 0;
}