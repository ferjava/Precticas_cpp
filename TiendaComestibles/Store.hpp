/**
 * @file Store.hpp
 * @author ferjava
 * @brief Declaracion de la clase Store (tienda)
 * Contiene la declaracion de la clase store .
 * La clase store es la responsable de iniciar , mantener  y finalizar la aplicacion .Tambien muestra  informacion  que ve el usuario
 * por la pantalla (screen )
 * @version 0.1
 * @date 2020-04-08
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef STORE_HPP
#define STORE_HPP
///includes

#include "fjv.h"
///
#pragma once

namespace fjv
{
    namespace Tienda
    {   
        enum fjv_return :uint {FJV_SUCESS = 0 ,FJV_ERROR};
        class Store :public fjv::Application
        {
            //TODO: Realizar a la clase
           private:


           public:  
           //Acciones 
            uint init()override;
            uint update()override;
            uint exit()override;



        };

    }
}
#endif //STORE_HPP
