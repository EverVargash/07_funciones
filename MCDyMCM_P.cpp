#include <iostream>
#include <string>
using namespace std;

void MCDyMCM(int a, int b, int *mcd, int *mcm);
int main(){
    int x, y;
    int rMCD, rMCM;
    string op;

    cout<<"*****************CALCULAR_EL_MCM_Y_MCD_DE_DOS_NUMEROS*****************"<<endl;
    do {
        cout<<"Ingrese el primer numero: "; cin>>x;
        cout<<"Ingrese el segundo numero: "; cin>>y;
        if(0<x && 0<y){
            MCDyMCM(x, y, &rMCD, &rMCM);
            cout<<"El MCD de "<<x<<" y "<<y<<" es: "<<rMCD<<endl;
            cout<<"El MCM de "<<x<<" y "<<y<<" es: "<<rMCM<<endl;
            return 0;
        }
        else {
            cout<<"Ingrese numeros entero positivos"<<endl;
            cout<<"Presiona caulquier letra para salir del programa"<<endl;
            cout<<"Presiona 'y' para volver a intentarlo:"; cin>>op;
        }
    } while (op=="y");
    return 0;
}

void MCDyMCM(int a, int b, int *mcd, int *mcm){
    int i;
    i=1;
    *mcd = 1;
    while (i<=a && i<=b){
        if (a%i==0 && b%i==0){
            *mcd=i;
        }
        i+=1;
    }
    *mcm=(a*b)/(*mcd);
}