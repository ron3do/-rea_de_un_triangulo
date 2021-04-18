#include <iostream>

using namespace std;
int main() {
  float base=0; /*Variable en la cual se tomara el valor de la base 
                  del triangulo, se elegio el uso de la variable tipo float por si tamaño de la base lleva punto decimal 
                 */
  float altura=0; /*  Variable en la cual se tomara el valor de la                    altura del triangulo, se elegio el uso de la                        variable tipo float por si tamaño de la alura
                  lleva punto decimal
                  */ 
  float area=0; /* Variable donde se guardara el resultado de la                      operación del area. Es de tipo float debido a que                   se guardara el resultado de una división.
                  */

  cout <<"Digite el valor de la base del triangulo\n"; /* se 
                  visualiza el mensaje para que usuario digite el valor de la base*/
  
  cin >>base; // se almacena el valor digita en la variable base 
  
  cout <<"Digite el valor de la altura del triangulo\n"; /* se 
                  visualiza el mensaje para que usuario digite el valor de la altura */
  
  
  cin >>altura; // se almacena el valor digita en la variable altura

  area=(base*altura)/2; /* se realiza el calculo del área del
                           triangulo */

  cout << "El area del triangulo es: "<<area;  /*se visualiza el 
                resultado del calculo del area que se encuentra almacenado en la variable area */
  

  
 
}