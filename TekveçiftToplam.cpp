#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL, "Turkish");
int sayi, i, n;
int tekAdet = 0, ciftAdet = 0;
int tekToplam = 0, ciftToplam = 0;

cout << "Kaçtane sayý gireceksiniz :";
cin >> n;
for (i = 1; i <= n; i++)
{
    cout << i << ". Sayý : ";
    cin >> sayi;

    if (sayi % 2 == 1) {
        tekAdet++;
        tekToplam += sayi;
    }
    else {
        ciftAdet++;
        ciftToplam += sayi;
    }
}
cout << endl;
cout << "Girilen Tek Sayý Adeti : " << tekAdet << endl;
cout << "Girilen Tek Sayýlarýn Toplamý : " << tekToplam << endl;
cout << "Girilen Çift Sayý Adeti : " << ciftAdet << endl;
cout << "Girilen Çift Sayýlarýn Toplamý : " << ciftToplam << endl;
}
