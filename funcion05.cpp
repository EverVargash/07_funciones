#include <iostream>
using namespace std;

int main(){
    int num1, num2, mcd, mcm;
    
    cout<<"                    CALCULAR EL MCM Y MCD"<<endl;
    cout<<"Ingrese un numero: "; cin>>num1;
    cout<<"Ingrese otro numero: "; cin>>num2;

    for(int i=1 ; i<=num1 && i<=num2 ; i++){
        if(0==num1%i && 0==num2%i){
            mcd=i;
        }
    }
    mcm=num1*num2/mcd;
    cout<<"El MCD es: "<<mcd<<endl;
    cout<<"El MCM es: "<<mcm<<endl;
    return 0;
}