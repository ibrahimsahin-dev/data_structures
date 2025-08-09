#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
string mergeAlternately(string word1, string word2) {
    int i=0;
    int j=0;
    string x;
        while(word1[i] || word2[j])
        {
            if(word1[i])
            {
                x+=word1[i];
                i++;
            }
            if(word2[j])
            {
                x+=word2[j];
                j++;
            }
        }
        return x;
    }
int main() {
    // Fonksiyonu test etmek için örnek girdiler tanımlayalım
    string kelime1 = "abc";
    string kelime2 = "pqr";
    
    string kelime3 = "ab";
    string kelime4 = "pqrs";

    // İlk testi çalıştıralım ve sonucu ekrana yazdıralım
    cout << "Test 1: " << mergeAlternately(kelime1, kelime2) << endl;

    // İkinci testi çalıştıralım ve sonucu ekrana yazdıralım
    cout << "Test 2: " << mergeAlternately(kelime3, kelime4) << endl;

    return 0;
}