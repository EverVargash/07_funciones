#include <iostream>
using namespace std;

int maxcd(int a, int b);

int main(){
    int num1, num2, mcm;
    
    cout<<"                    CALCULAR EL MCM Y MCD"<<endl;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    if(num1>0 && num2>0 ){
        cout<<"El MCD de "<<num1<<" y "<<num2<<" es: "<<maxcd(num1, num2)<<endl;
        mcm=num1*num2/maxcd(num1, num2);
        cout<<"El MCM de "<<num1<<" y "<<num2<<" es: "<<mcm<<endl;
    }
    else cout<<"Los numeros tienen que ser enteros positivos";
    return 0;
}

int maxcd(int a, int b){
    int mcd;
    for(int i=1 ; i<=a && i<=b ; i++){
        if(0==a%i && 0==b%i){
            mcd=i;
        }
    }
    return mcd;
}