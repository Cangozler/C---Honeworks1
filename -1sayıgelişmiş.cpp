#include <iostream>
    using namespace std;
    int main()
    {
        setlocale(LC_ALL,"Turkish"); //Türkçe karakter
        int sayi,toplam=0;
        while(true)
        {
            cout<<"Sayý Gir:";
            cin>>sayi;
            if(sayi==-1)
            {
                break;
            }

            if(sayi%7==0)
            {

                cout<<"sayi 7 ye tam bölünür...\n";
            }
            else
            {
            cout<<"sayi 7 ye tam bölünmez...\n";
            }

            toplam+=sayi;


        }
        cout<<"Girilen Sayýlarýn Toplamý : "<<toplam;
    }
