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
    Almacen almacen;

    almacen.stock = 50; 
    std:: cout << "======INICIO DE PROGRAMA =====" << std:: endl; 
    std:: cout << "Inicio del stock asignado: " <<  std:: endl; 
    ConsultarStock(almacen.stock);

    IngresarStock(almacen.stock, 25);
    std::cout << "Despues de cargar 25 unidades: " << std::endl;
    ConsultarStock(almacen.stock);

    RetirarStock(&almacen.stock, 10);
    std::cout << "Despues de consumir 10 unidades: " << std::endl;
    ConsultarStock(almacen.stock);






    
    return 0;
}

void IngresarStock(int &stock, int cantidad)
{
    if (cantidad < 0 )
    {
        std:: cout << "No se permite ingresar cantidades negativas " << std:: endl; 
    }
    else{
        stock += cantidad; 
        std:: cout << "Exito! se han ingresado " << cantidad << " De productos Correctamente" << std:: endl; 
    }
    
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
    std::cout<< "Stock actual: " << stock << " unidades" <<std::endl;
}