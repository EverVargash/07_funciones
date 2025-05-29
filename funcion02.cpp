#include <iostream>

using namespace std;

int factorial(int a);

int main(){
    int num;
    double sum=0;
    
    cout<<"Ingrese hasta que termino decea la suma: "<<endl; 
    cin>>num;

    for(int i=1 ; i<=num ; i++){
        sum+=factorial(i)/(2.0*i);
    }
    cout<<"La suma es: "<<sum;
    return 0;
}

int factorial(int a){
    int f;
    f=1;
    for(int i=2 ; i<=a ; i++){
        f*=i;
    }
    return f;
}