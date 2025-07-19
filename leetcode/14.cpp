#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ret={""};
        string ortak=strs[0];
        if (strs.empty()) return "";
        
        int i=0;
        int j=0;
       while(i<strs.size()-1)
       {
        j=0;
        while(j<ortak.size() && j<strs[i+1].size())
            if(ortak[j]==strs[i+1][j]){
                ret+=ortak[j];
                j++;
            }
            else{
                break;
            }
            ortak=ret;
        ret={""};
        i++;

        }
        return ortak;
        
    }



int main(
){
    vector<string> a = {"flower","flow","flight"};
    vector<string> atrs = {"dog","dacecar","dar"};
    cout<<longestCommonPrefix(a);
    

}