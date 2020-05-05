#include "sumar.hpp"
#include "restar.hpp"
#include "calculos_dos.hpp"
#include <iostream>

void Calculos(int a, int b){
  int resultado;
   resultado = Sumar(a, b);
   std::cout << a << " + " << b << " = " << resultado << "\n";
   resultado = Restar(a, b);
   std::cout << a << " - " << b << " = " << resultado << "\n";
   CalculosParteDos(a, b);
}
