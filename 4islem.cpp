#include <iostream>
  
using namespace std;
  
int main()
{
int sayi1,sayi2,secim,sonuc;
cout<<"Sayi giriniz :"; cin>>sayi1;
cout<<"Sayi giriniz :"; cin>>sayi2;
cout<<"Yapmak istediginiz islemi seciniz \n 1.Toplama \n 2.Cikarma \n 3.Carpma \n 4.Bolme \n"; cin>>secim;
  
switch(secim)
{
case 1:
sonuc=sayi1+sayi2;
break;
case 2:
sonuc=sayi1-sayi2;
break;
case 3:
sonuc=sayi1*sayi2;
break;
case 4:
sonuc=sayi1/sayi2;
break;
default:
cout<<"Lütfen 1 ile 4 arasýnda bir sayi giriniz";
break;
}
cout<<"islem sonucunuz = "<<sonuc;
return 0;
}
