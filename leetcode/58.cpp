#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 int lengthOfLastWord(string s) {
    int size=s.length();
    int i=size;
    if(i==1 && s[size-1]!=' '){return 1;}
    while(i-1>0){
        if(s[size-1]==' '){
            size--;
        }
        i--;
    }
    int lastindex=size;
    while(s[size-1] !=' ' && size-1>=0){
        size--;
        if(size==0){break;}
    }
    int firstindex=size;
    return lastindex-firstindex;
    }