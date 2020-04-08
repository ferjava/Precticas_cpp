/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief  Funcion Main de  Aplicacion  Tienda de Comestibles online 
 * @version 0.1
 * @date 2020-04-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "fjv.h"
#include "GroceryItem.hpp"
#include "Store.hpp"
int main (int argc ,char* argv[])
{
    fjv::Tienda::Store * tienda = new fjv::Tienda::Store();

    tienda->set_name("Tienda de Alimentos la buena berenjena");

    std::cout << tienda->get_name() << std::endl;
    uint ert = tienda->init();
    if(ert != fjv::Tienda::fjv_return::FJV_SUCESS) exit(EXIT_FAILURE);
    ert = tienda->update();
    if(ert != fjv::Tienda::fjv_return::FJV_SUCESS) exit(EXIT_FAILURE);
    ert = tienda->exit();
    if(ert != fjv::Tienda::fjv_return::FJV_SUCESS)
    {
        std::cout << "ADIOs" << std::endl;
    }
    else
    {
        /* code */
        std::cout << " JOERRRRRR"<< std::endl;
    }
    




    return EXIT_SUCCESS;

    
}