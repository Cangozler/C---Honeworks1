#include <iostream>
#include<locale>
using namespace std;
main() {

	float x;
		setlocale(LC_ALL,"Turkish");
			cout<<"Bir x de�eri giriniz : ";cin>>x;
			
			float a = ((x*x)+(2*x)+5);
			float b =	((x*x*x)+(-4*x)+7);
			float c = ((x*x*x)+((-2)*(x*x))+5)/((x-3)*(x-3)*(x-3));
			
	if(x>0){
		
		cout<<"x 0'dan b�y�k = "<<a;
		
		
	}else if(x<0){
		cout<<"x 0'dan k�c�k = "<<c;
		
	}
	else{
	
		cout<<"x 0'a e�it = "<<b;
		
		
	}
	
}
