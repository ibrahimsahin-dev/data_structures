#include <bits/stdc++.h>
using namespace std;

string decodeString_bruteforce(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c != ']') {
            stk.push(c);
        } else {
            // substring çıkar
            string sub = "";
            while (!stk.empty() && stk.top() != '[') {
                sub = stk.top() + sub;
                stk.pop();
            }
            stk.pop(); // '[' sil

            // sayı çıkar
            string num = "";
            while (!stk.empty() && isdigit(stk.top())) {
                num = stk.top() + num;
                stk.pop();
            }
            int k = stoi(num);

            // tekrarla ve stack’e geri bas
            string expanded = "";
            for (int i = 0; i < k; i++) expanded += sub;
            for (char x : expanded) stk.push(x);
        }
    }

    string res = "";
    while (!stk.empty()) {
        res = stk.top() + res;
        stk.pop();
    }
    return res;
}

int main(){
    cout<<endl<<decodeString_bruteforce("3[a]");
}