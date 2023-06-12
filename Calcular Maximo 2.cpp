#include <iostream>

using namespace std;
int CalcularMaximo(int a,int b,int c);
int main(){
    int n1, n2,n3;
    cout<<"ingrese un numero"<<endl;
    cin>>n1;
    cout<<"ingrese otro numero"<<endl;
    cin>>n2;
    cout<<"ingrese otro numero"<<endl;
    cin>>n3;
    cout<<"el maximo es: "<<CalcularMaximo(n1,n2,n3);
    return 0;
}
int CalcularMaximo(int a,int b,int c){
    int Maximo;
    if(a>b && a>c)
    {
        Maximo=a;
    }
    if(b>c && b>a)
    {
        Maximo=b;
    }
    if(c>a && c>b)
    {
        Maximo=c;
    }
    return Maximo;
}
