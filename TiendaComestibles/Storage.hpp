/**
 * @file Storage.hpp
 * @author your name (you@domain.com)
 * @brief  Contiene la declaracion de la  clase storage (almacen ) que sera la encargada del mantenimiento de articulos 
 * @version 0.1
 * @date 2020-04-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef STORAGE_HPP
#define STORAGE_HPP
#include <string>
#include <list>
#include <iterator>
#include "GroceryItem.hpp"
#include "Store.hpp"
#pragma once 

namespace fjv
{
    namespace Tienda
    {
        class Storage
        {
            public:
            Storage(Store *tienda);///< Almacen relacionado con la esa tienda 
            //Acciones 
            virtual ~Storage();///< Destruye todos los objetos de la lista y libera la memoria
            //Modificadores de lista
            uint init();///< Inicializa  la lista 
            uint update ();///< Actualiza la lista 
            uint exit();///Cierra la lista 
            //Modificadores de articulos en la lista
            uint add_item (GroceryItem* item);///< Añade un articulo  a la lista 
            uint del_item (GroceryItem* item);///< elimimina el articulo  de la lista 
            uint drecease_item(GroceryItem* item ,uint articulos_a_quitar);///< Reduce la cantidad disponible en ese articulo
            uint increase_item(GroceryItem* item , uint articulos_a_add);///< Añade mas articuloes de ese tipo
            GroceryItem* current();///< Articulo actual de la lista 
            GroceryItem* next();///<  proximo Articulo de la lista
            GroceryItem* previus();///< Proximo Articulo de la lista 
            
            ///informacion 
            int number_item();///< Obtiene el numero de articulos de la lista 

            protected:
            uint load_file(std::string file_name );///< Carga los Articulos guardados en el Archivo
            uint save_file(std::string file_name ):///< Salva los Articulos guardado en el Archivo 
            
            private:
            Store* tienda ;
            std::list<GroceryItem*> grocery_list ; ///< Lista de articulos 
            std::list<GroceryItem*>::iterator grocery_list_iter ; ///< Iterador de la lista 
                


        };
    }
}


#endif //STORAGE_HPP