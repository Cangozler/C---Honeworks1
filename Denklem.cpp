#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	int x=0;
	//int y;
	//int denklem;
	cout<<"x deðerini giriniz";
	cin>>x;
	
	if(x>0)
	{
		cout<<"y=3x^2-4x+5";
		//cin>>y;
	}
	else if(x<0)
	{
		cout<<"y=-2x^2+4x-3";
		//cin>>y;
	}
	else if(x=0)
	{
		cout<<"y=-2x^3-3x+4";
		//cin>>y;
	}
	
	
	
	
	
}
