#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL,"Turkish");
int mesafe,zaman,normalhiz;
cout<<"Gidilen mesafeyi giriniz : ";
cin>>mesafe;
cout<<"Gecirilen zamani giriniz : ";
cin>>zaman;
normalhiz=mesafe/zaman;
cout<<"olmasi gereken hiz :"<<normalhiz;
}
