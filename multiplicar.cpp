#include <iostream>
#include <cstdlib>
using namespace std; 


void multiplicacion(int a, int b)
{  
   cout<< "La multiplicación es " << a*b << endl;

}
void cuadrado(int a, int b)
{  
   cout<< "Los cuadrados son " << a*a << " y "<< b*b << endl;
}
int main() 
{  int a=5; 
   int b=10; 
   multiplicacion(a,b);
   cuadrado(a,b);
   
}

