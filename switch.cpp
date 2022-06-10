#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int a;
    char b;
    cout<<"Ingrese un numero del 1-8: ";
    cin>>a;
    switch (a){
    case 1: cout<<"Es el numero 1"<<endl; break;
    case 2: cout<<"Es el numero 2"<<endl;break;
    case 3: cout<<"Es el numero 3"<<endl;break;
    case 4: cout<<"Es el numero 4"<<endl;break;
    case 5: cout<<"Es el numero 5"<<endl;break;
    case 6: cout<<"Es el numero 6"<<endl;break;
    case 7: cout<<"Es el numero 7"<<endl;break;
    case 8: cout<<"Es el numero 8"<<endl;break;
    default: cout<<"El numero no es correcto"<<endl;
    }
    cout<<"Ingrese una letra: ";
    cin>>b;
    switch (b){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"La letra es una vocal";break;
        default: cout<<"La letra es una consonante";break;

    }

}
