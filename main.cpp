#include <iostream>
#include <math.h>
using namespace std;

int sumacuadrado(int n ){
    int cuadrado=0,suma=0;
    for (int i =1;i<=n ;i++){
        cuadrado=cuadrado + pow(i,2);
    }
    suma=suma+cuadrado;
    return suma;
}
int sumanumeros(int n){
    int suma=0,res;
    for(int i=1;i<=n;i++){
        suma=suma+i;
    }
    res=pow(suma,2)+1;
    return res;
}
int main()
{
    int x=100;
    cout << sumacuadrado(x)<< endl ;
    cout << sumanumeros(x)<< endl ;
    cout << sumanumeros(x) - sumacuadrado(x) << endl ;
    return 0;
}
