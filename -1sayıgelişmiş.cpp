#include <iostream>
    using namespace std;
    int main()
    {
        setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
        int sayi,toplam=0;
        while(true)
        {
            cout<<"Say� Gir:";
            cin>>sayi;
            if(sayi==-1)
            {
                break;
            }

            if(sayi%7==0)
            {

                cout<<"sayi 7 ye tam b�l�n�r...\n";
            }
            else
            {
            cout<<"sayi 7 ye tam b�l�nmez...\n";
            }

            toplam+=sayi;


        }
        cout<<"Girilen Say�lar�n Toplam� : "<<toplam;
    }
