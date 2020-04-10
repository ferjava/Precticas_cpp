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
#include "Storage.hpp"
#include "ShoppingCar.hpp"
#include <memory>
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
           
           /**
            * @brief Construct a new Store object
            * Cosnturctor por defecto de
            */
           Store(){};
           //Acciones 
           /**
            * @brief Esta accion de inicializar la aplicacion 
            * es la encargada de  crear al menos una instancia a  el almacen
            *  
            * @return uint 
            */
            uint init()override;
            /**
             * @brief Esta funcion es la responsable de resolver las acciones realizadas por la 
             * aplicacion toma el control una vez  que la aplicacion se iniciado correctamente 
             * 
             * @return uint 
             */
            uint update()override;
            /**
             * @brief Esta accion se encarga de guardar y cerrar toda la informacion de nuestro alamcen 
             * 
             * @return uint 
             */
            uint exit()override;

            private:
            Storage* almacen ;


        };

    }
}
#endif //STORE_HPP
