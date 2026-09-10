#include <iostream>



void IngresarStock(int &stock, int cantidad); 

struct Almacen
{
    int stock;
};


void RetirarStock(int *stock, int cantidad);
void ConsultarStock(int stock);


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
    

void RetirarStock(int *stock, int cantidad)
{
    if (cantidad > *stock)
    {
        std::cout<< "No hay suficiente stock disponible..." <<std::endl;
    }
    else if (cantidad <= 0)
    {
        std::cout<< "Cantidad invalida para retirar..." <<std::endl;
    }
    
    else
    {
        *stock -= cantidad;
    }
    
}

void ConsultarStock(int stock)
{
    std::cout<< "Stock actual: " << stock << "unidades" <<std::endl;
}