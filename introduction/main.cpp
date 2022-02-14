#include <iostream>
using namespace std;

void suma(int a, int b){
  cout << "suma " << a + b;
  cout << "suma " << a + b;
  cout << "suma " << a + b;
}
int add(int a, int b){
  cout << "ADD FUNKCIJA " << a + b << endl;
  return a + b;
}
int add(char a, int b){
  return 'd';
}


double add(double c, int a){
  return c + a;
}

namespace policija{
  void spausdinti(int skaicius){
    cout <<"Policijos funkcija Mano skaicius: "<< skaicius << endl;
  }
}
namespace eif{
  void spausdinti(int skaicius){
    cout <<"Eif Mano skaicius: "<< skaicius << endl;
    cout << skaicius << endl;
  }
}

int main() {

  int a = 10;
  int b = 20;
  //int suma = a + b;

  suma(12, 55);


  int rezultatas = add(77, 99);
  double kita = add(2.5, 48);

  policija::spausdinti(add(3.5, 40));


  int skaicius = 10; // sveikasis
  char simbolis = '#'; // 35
  float su_kableliu = 4.55f;
  string vardas ="Marius";
  skaicius = 22;
  string tekstas = "hello world";

   //policija::spausdinti(suma);
   //eif::spausdinti(33);

  //cout << "Hello, World!" << endl;
  return 0;
}
