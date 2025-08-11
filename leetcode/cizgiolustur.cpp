#include <iostream>
using namespace std;

int xxx[120] = {0};  // Daha büyük dizi
int yyy[120] = {0};

void cizgi_olustur(int x, int y, int xx, int yy, int parca_sayisi) {
    int yatay_fark = (xx - x) / parca_sayisi;
    int dikey_fark = (yy - y) / parca_sayisi;
    int i = 1;
    
    while (i < 200 && xxx[i] != 0) i++;  
    
    for (int j = 0; j < parca_sayisi && i < 200; j++) {
        xxx[i] = x + (yatay_fark * (j + 1));
        yyy[i] = y + (dikey_fark * (j + 1));
        i++;
    }
}
void curve_olustur(int x, int y, int xx, int yy, int parca_sayisi)
{
    
}



int main() {
    cizgi_olustur(0, 750, 2250, 750, 30);
    cizgi_olustur(2500, 750, 2500, 0, 10);
    cizgi_olustur(2750, 250, 3750, 1250, 20);
    cizgi_olustur(3750, 1750, 2750, 2750, 20);
    cizgi_olustur(2500, 3000, 2500, 2250, 10);
    cizgi_olustur(2250,2250 , 0, 2250, 30);
    



    for (int i = 1; i < 200; i++) {
        if (xxx[i] == 0 && yyy[i] == 0) break;
        cout << "xxx[" << i << "] = " << xxx[i] << ", yyy[" << i << "] = " << yyy[i] << endl;
    }
    return 0;
}