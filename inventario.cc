#include <iostream>

struct Almacen
{
    int stock;
};


void RetirarStock(int *stock, int cantidad);
void ConsultarStock(int stock);


int main()
{
    
    return 0;
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