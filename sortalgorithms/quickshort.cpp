#include <iostream>
using namespace std;
void quick_sort(int dizi[], int begin, int end){
    if (begin >= end) {
        return;
    }
    int i,j,pivot,temp;
    i=begin;
    j=end;
    pivot=dizi[(begin+end)/2];
    while(i<=j){
        while(dizi[i]<pivot){
            i++;
        }
        while(dizi[j]>pivot){
            j--;
        }
        if(i<=j){
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
            i++;
            j--;
        }
    }
    quick_sort(dizi, begin, j);
    quick_sort(dizi, i, end);
   
}

void print_dizi(int dizi[], int size) {
    for (int k = 0; k < size; k++) {
        cout << dizi[k] << " ";
    }
    cout << endl;
}
int main() {
    int my_dizi[8] = {1, 3, 1, 5, 2, 7, 3, 8};
    
    quick_sort(my_dizi, 0, 7);
    cout << "Sıralı Dizi (Senin Quick Sortun ile): ";
    print_dizi(my_dizi, 7);

   

    return 0;
}