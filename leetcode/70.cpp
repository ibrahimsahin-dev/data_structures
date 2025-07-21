#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;
int climbStairs(int n) {
    
    int i[n];
    i[1]=1;
    i[2]=2;
    for(int j=3; j<=n; j++)
    {
        i[j]=i[j-1]+i[j-2];
    }
    return i[n];
    







     // time limit exceeded faileeeeeeeeeeeed     
    /*if(n==1){return 1;}
       if(n==2){return 2;}
       int ret= climbStairs(n-1)+climbStairs(n-2);
       return ret;*/
}
int main(){
    cout<<climbStairs(3)<<endl;
    cout<<climbStairs(43);

}