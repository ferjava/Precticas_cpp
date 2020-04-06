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
int main (int argc ,char* argv[])
{
    fjv::Application * app = new fjv::Application("Tienda de comestibles ",0,1);
    fjv::Tienda::GroceryItem * iten = new fjv::Tienda::GroceryItem("prueba",10,2);


    std::cout << app->get_name() << std::endl ;
    std::cout << iten->get_nameitem() << std::endl;
    try
    {
        iten->set_qtypurchased(5);
       std::cout <<  iten->get_qtypurchased() << std::endl;
    }
    catch(fjv::Tienda::ExMaxItemExceded &e )
    {
        e.mensaje();
        std::cout << "Solo tienes :" << iten->get_qtyitem() <<  std::endl;
     }
    
    
    delete app;
    delete iten;
    return EXIT_SUCCESS;

    
}