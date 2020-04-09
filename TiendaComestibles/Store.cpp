/**
 * @file Store.cpp
 * @author your name (you@domain.com)
 * @brief  Implementacion de la clase Store
 * @version 0.1
 * @date 2020-04-08
 * 
 * @copyright Copyright (c) 2020
 * 
 * 
 */

#include "Store.hpp"
#include <iostream>
namespace fjv
{
    namespace Tienda
    {   /**
         * 
         * @return uint 
         */
        uint Store::init ()
        {
            std::cout << " Iniciando Init " << std::endl ;
            
            return fjv_return::FJV_SUCESS;
        }
        uint Store::update ()
        {
            std::cout << "En  la funcion Update " << std::endl ;
            return fjv_return::FJV_SUCESS;
        }
        uint Store::exit()
        {
            std::cout << "En la funcion Salir " << std::endl;
            return fjv_return::FJV_SUCESS;
        }
    }
}