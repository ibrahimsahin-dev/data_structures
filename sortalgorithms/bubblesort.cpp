#include <iostream>
using namespace std;

void bubble(int dizi[], int n){
    int i=0;
    int j=0;
    while(i<n-1){
        j=0;
        while(j<n-i-1){
            if(dizi[j]>dizi[j+1]){
                int temp=dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=temp;
            }
            j++;
        }
        i++;
    }
}
int main(){
    int dizi[10]={1,5,1,2,4,2,7,3,4,2};

    bubble(dizi,10);
    for(int i: dizi){
        cout<<i<<endl;
    }
}