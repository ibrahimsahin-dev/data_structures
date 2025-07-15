#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        string dizi;
        int i=0;
        while(s[i]){
            if(dizi.find(s[i])!=-1){
                i++;
            }
            else{
                dizi.push_back(s[i]);
                i++;
            }
        }
        return dizi.length();
    }
int main(){
    string s="abbac";
    cout<< lengthOfLongestSubstring(s);
}