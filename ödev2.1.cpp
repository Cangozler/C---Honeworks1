#include<iostream>
#include<locale>
using namespace std;
int main()
{

    setlocale(LC_ALL, "Turkish");

    int baslangic, a, bitis, i, toplam = 0, sayi = 0;
    cout << "Baslang�� icin sayi giriniz: ";
    cin >> baslangic;
    cout << "Biti� icin sayi giriniz";
    cin >> bitis;
    cout << "Ka�a b�lmek isted�inizi girin: ";
    cin >> a;
    for (i = baslangic; i <= bitis; i++)
    {
        if (i % a == 0)
            sayi++; toplam += i;
    }

    cout << "Girilen aralikta " << sayi << " kadar sayi " << a << " ile b�l�n�r";
    cout << "\n"
         << "Girilen aralikta " << a << " ile b�l�nen sayilarin toplami : " << toplam;
         cout<<"\n"<<"~Made By Cangozler~";
    return 0;
}
