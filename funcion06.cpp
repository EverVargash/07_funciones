#include <iostream>
using namespace std;

void resto(int a, int b);

int main(){
    int num, dnm;
    cout<<"******************************************************************"<<endl;
    cout<<"            CALCULAR RESTO Y COCIENTE CON RESTAS"<<endl;
    cout<<"******************************************************************"<<endl;
    cout<<"Ingese el numerador: "; cin>>num;
    cout<<"Ingrese el denominador: "; cin>>dnm;

    if(dnm != 0){
        resto(num, dnm);
    }
    else cout<<"El denominador no puede ser cero";
    return 0;
}

void resto(int a, int b){
    int resto, cant=0, rpt;
    while(a>=b){
        a-=b;
        cant+=1;
    }
    cout<<"El resto es: "<<a<<endl;
    cout<<"El cociente es: "<<cant<<endl;
}
