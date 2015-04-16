/* Calculadora
* CeciliaGiselleFesti			
* 16042015
*/

#include <iostream>
using namespace std;
int main ()
{
float a, b, resultado;

char operacion;

	cout << "Ingrese un numero entero positivo, la operacion a realizar y otro numero entero positivo. Ejemplo : 5 - 1" << endl;
	cin >> a >> operacion >> b;
	
switch(operacion){
   case '+':
         resultado = a + b;
         break;
         
    case '-':
    	resultado=a-b;
    	break;
    	
    case '/':
    	resultado=a/b;
    	break;
    	
    case '*':
    	resultado=a*b;
    	break;
    
	default:
		
    cout << "Operacion no valida" << endl;
    
	return-1;
         
   }
   cout << "El resultado de la operacion es:" << resultado << endl;
return 0;
}
