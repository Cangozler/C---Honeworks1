#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL,"turkish");
int sayi1,sayi2,sayac=0;
cout<<"Birinci Sayýyý Giriniz : "; cin>>sayi1;
cout<<"Ýkinci Sayýyý Giriniz : "; cin>>sayi2;
while(sayi1>=sayi2){
sayi1-=sayi2;
sayac=sayac+1;
}
cout<<"Sonuç : "<<sayac;
return 0;
cout<<"\n Kalan : "<<sayi1;
}

