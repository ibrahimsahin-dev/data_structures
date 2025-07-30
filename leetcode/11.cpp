#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int maxArea(vector<int>& height) {
        //[1,8,6,2,5,4,8,3,7]
        int max=0;
        int i=0;
        int j=height.size()-1;
        while(i<=j)
        {
            if(height[i]>height[j])
            {
                int mmax=height[j]*(j-i);
                if(mmax>max)
                    max=mmax;
                j--;
            }
            else{
                int mmax=height[i]*(j-i);
                if(mmax>max)
                    max=mmax;
                i++;
            }
        }
        return max;
    }
int main()
{
    vector<int> s={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(s);
}