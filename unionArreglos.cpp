#include <iostream>
#define MAX 100
using namespace std;

int main(){
    
    int arreglo1[MAX],arreglo2[MAX],arreglo3[MAX*2];
    int n1,n2,n3,e;

    do{
        cout<<"Ingrese la cantidad de elementos del arreglo 1:";
        cin>>n1;
    }while(n1<=0 || n1>MAX); //El arreglo no puede ser mayor a la cantidad maxima ni estar vacio

    for(int i=0;i<n1;i++){
        cout<<"Elemento del indice "<<i<<" :";
        cin>>arreglo1[i];
    }

    do{
        cout<<"Ingrese la cantidad de elementos del arreglo 2:";
        cin>>n2;
    }while(n2<=0 || n2>MAX);

    for(int i=0;i<n2;i++){
        cout<<"Elemento del indice "<<i<<" :";
        cin>>arreglo2[i];
    }
    cout<<"La union de arreglos es: "<<endl;
    e = 0;
    n3 = n1+n2;
    for(int i=0;i<n1;i++){
        arreglo3[e] = arreglo1[i];
        e++;
    }

    for(int i=0;i<n2;i++){
        arreglo3[e] = arreglo2[i];
        e++;
    }

    for(int i=0;i<n3;i++){
        cout<<arreglo3[i]<<" ";
    }

    return 0;
}
