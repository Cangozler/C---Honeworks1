#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,toplam=0, sayac=0;
	while(1){
		cout<<".say�. gir";cin>>sayi;
		if(sayi==0)
		{
		break;
		}
		toplam+=sayi;
		sayac++;
	}
	cout<<"girilen say� adeti "<<sayac<<" "<<"girilen say�lar�n adeti toplam�"<<toplam;
}

