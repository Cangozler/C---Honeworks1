#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi1, sayi2, sonuc, secim;
	cout<<"1. say�y� giriniz :";
	cin>>sayi1;
	cout<<"2. say�y� giriniz :";
	cin>>sayi2;
	cout<<"seciminizi yap�n�z� :(1 toplama) (2 ��karma) (3 �arpma) (4 b�lme)";
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
		cout<<"yanl�� bir i�lem girdiniz :";
	
}
	cout<<"sonu� :"<<sonuc;
}


