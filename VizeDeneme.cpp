#include <iostream>
#include <locale>
using namespace std;
 main()
{

setlocale(LC_ALL,"Turkish");
    int yaricap;

        cout<<"yaricapi giriniz:";
        cin>>yaricap;

 float alan = 3.14*(yaricap*yaricap);
 float cevre = 2*3.14*yaricap;
        cout<<"Dairenin Alani :"<<alan;
        cout<<"\nÇember Cevresi :"<<cevre;
return 0;

}
