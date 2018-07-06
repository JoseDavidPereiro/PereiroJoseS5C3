#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;


int main(){
  int i, numeroal;int d=0;
  for(i=0;i<1000;i++){
    numeroal = rand() % 100 + 1;
    cout << i << " " << numeroal << endl;  	
    if (numeroal%2==0 && numeroal<89)
    {int c=numeroal;
      d++;
    if(d<25)
    { cout << "el numero es " << c<< endl;}
      }
  }	
return 0;
}
