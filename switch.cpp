#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int a;
    cout<<"Ingrese un numero del 1-8: ";
    cin>>a;
    switch (a){
    case 1: cout<<"Es el numero 1"; break;
    case 2: cout<<"Es el numero 2";break;
    case 3: cout<<"Es el numero 3";break;
    case 4: cout<<"Es el numero 4";break;
    case 5: cout<<"Es el numero 5";break;
    case 6: cout<<"Es el numero 6";break;
    case 7: cout<<"Es el numero 7";break;
    case 8: cout<<"Es el numero 8";break;
    default: cout<<"El numero no es correcto";
    }

}
