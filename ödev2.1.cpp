#include<iostream>
#include<locale>
using namespace std;
int main()
{

    setlocale(LC_ALL, "Turkish");

    int baslangic, a, bitis, i, toplam = 0, sayi = 0;
    cout << "Baslangýç icin sayi giriniz: ";
    cin >> baslangic;
    cout << "Bitiþ icin sayi giriniz";
    cin >> bitis;
    cout << "Kaça bölmek istedðinizi girin: ";
    cin >> a;
    for (i = baslangic; i <= bitis; i++)
    {
        if (i % a == 0)
            sayi++; toplam += i;
    }

    cout << "Girilen aralikta " << sayi << " kadar sayi " << a << " ile bölünür";
    cout << "\n"
         << "Girilen aralikta " << a << " ile bölünen sayilarin toplami : " << toplam;
         cout<<"\n"<<"~Made By Cangozler~";
    return 0;
}
