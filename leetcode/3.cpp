#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int lengthOfLongestSubstring(string s) {
        string deger;
        if(s.length()==0){ return 0;}
        if(s.length()==1){ return 1;}
        int i =0;
        int j=0;
        int patladik=1;
        deger+=s[0];
        vector<int> dizi;
        while(s[i]){
            if(s[i]==s[i+1]){
                i++;
            }
            else{
                break;
            }
        }
        i++;
        while(s[i]){
            j=0;
            while(deger[j]){
                if(deger[j]==s[i]){
                    
                    patladik++;
                    i=patladik-1;
                    dizi.push_back(deger.length());
                    deger={};
                    deger+=s[i];
                    break;
                }
                else{j++;}
                
            }
            if(j==deger.length()){
                deger+=s[i];
            }
            i++;
        }
        if(dizi.size()==0){
            return deger.length();
        }
        int max=dizi.front();
        for(int x: dizi){
            if(x> max){
                max=x;
            }
        }
        if(max>=deger.length()){
            return max;
        }
        else{
            return deger.length();
        }
    
    }
    int main(){
        cout<<lengthOfLongestSubstring("aab");
    }