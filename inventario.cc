#include <iostream>


void IngresarStock(int &stock, int cantidad); 

struct Stock{
    int cantidad;
};




int main()
{
   int stock = 50; 
   std:: cout << "======INICIO DE PROGRAMA =====" << std:: endl; 
   std:: cout << "Inicio del stock asignado: " << stock << "unidades \n"<<  std:: endl; 

   //Prueba para ver comprobar IngresarStock
   IngresarStock(stock, 25);
   





    
    return 0;
}

void IngresarStock(int &stock, int cantidad)
{
    if (cantidad < 0 )
    {
        std:: cout << "No se permite ingresar cantidades negativas" << std:: endl; 
    }
    else{
        stock += cantidad; 
        std:: cout << "Exito! se han ingresado " << cantidad << " De productos Correctamente" << std:: endl; 
    }
    
}