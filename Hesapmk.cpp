#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi1, sayi2, sonuc, secim;
	cout<<"1. sayýyý giriniz :";
	cin>>sayi1;
	cout<<"2. sayýyý giriniz :";
	cin>>sayi2;
	cout<<"seciminizi yapýnýzý :(1 toplama) (2 çýkarma) (3 çarpma) (4 bölme)";
	cin>>secim;
	if(secim==1)
	{
		sonuc=sayi1+sayi2;		
	}	
	else if(secim==2)
	{
		sonuc=sayi1-sayi2;
	}
	else if(secim==3)
	{
		sonuc=sayi1*sayi2;
	}
		else if(secim==4)
		{	 
	 	  sonuc=sayi1/sayi2;
		}
		else
		{
		cout<<"yanlýþ bir iþlem girdiniz :";
	
}
	cout<<"sonuç :"<<sonuc;
}


