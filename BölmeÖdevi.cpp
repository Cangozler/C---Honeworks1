#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL,"turkish");
int sayi1,sayi2,sayac=0;
cout<<"Birinci Say�y� Giriniz : "; cin>>sayi1;
cout<<"�kinci Say�y� Giriniz : "; cin>>sayi2;
while(sayi1>=sayi2){
sayi1-=sayi2;
sayac=sayac+1;
}
cout<<"Sonu� : "<<sayac;
return 0;
cout<<"\n Kalan : "<<sayi1;
}

