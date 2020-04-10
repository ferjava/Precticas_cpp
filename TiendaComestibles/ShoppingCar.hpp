/**
 * @file ShoppingCar.hpp
 * @author your name (you@domain.com)
 * @brief  Contiene la declaracion de el carro de compra de nuestra aplicacion tienda de comestibles 
 * @version 0.1
 * @date 2020-04-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef SHOPPINGCAR_HPP
#define SHOPPINGCAR_HPP

#include <list>

#include "GroceryItem.hpp"
#pragma once 
namespace fjv 
{
    namespace Tienda
    {
        /**
         * @brief  Declaracion de una case carro que contiene los 
         * objetos de un Cliente 
         * 
         */
        class ShoppingCar
        {   
           public:
            virtual ~ShoppingCar();///< Destruimos el carro de la lista 

            unit add_item (GroceryItem* new_item ,uint items_number=1);///< Añade un articulo a la list
            uint price_all_items ();///Paga todos los articulos de la lista
            void show_shoppingcar();///< Muestra el contenido de la cesta 

           private:
           
            std::list<GroceryItem*> shopping_list;///< Lista de objetos del cliente              
            std::list<GroceryItem*>::iterator shoping_list_iter ; ///< iterador a la lista de objetos 

        };

    }
}


#endif //SHOPPINGCAR_HPP
