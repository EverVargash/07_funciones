#include <iostream>
using namespace std;

void MCDyMCM(int a, int b, int &mcd, int &mcm);

int main(){
    int x, y;
    int rMCD, rMCM;
    cout<<"****************Calculo_de_MCD_y_MCM_de_dos_numeros****************"<<endl;
    cout<<"                      (metodo de referencia)"<<endl;
    cout<<"Ingrese un numero: "; cin>>x;
    cout<<"Ingrese otro numero: "; cin>>y;
    MCDyMCM(x, y, rMCD, rMCM);
    cout<<"El MCD de "<<x<<" y "<<y<<" es "<<rMCD<<endl;
    cout<<"El MCM de "<<x<<" y "<<y<<" es "<<rMCM<<endl;
    return 0;
}

void MCDyMCM(int a, int b, int &mcd, int &mcm){
    int i;
    i=1;
    mcd = 1;
    while (i<=a && i<=b){
        if (a%i==0 && b%i==0){
            mcd=i;
        }
        i+=1;
    }
    mcm=(a*b)/(mcd);
}