#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL, "Turkish");
int sayi, i, n;
int tekAdet = 0, ciftAdet = 0;
int tekToplam = 0, ciftToplam = 0;

cout << "Ka�tane say� gireceksiniz :";
cin >> n;
for (i = 1; i <= n; i++)
{
    cout << i << ". Say� : ";
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
cout << "Girilen Tek Say� Adeti : " << tekAdet << endl;
cout << "Girilen Tek Say�lar�n Toplam� : " << tekToplam << endl;
cout << "Girilen �ift Say� Adeti : " << ciftAdet << endl;
cout << "Girilen �ift Say�lar�n Toplam� : " << ciftToplam << endl;
}
