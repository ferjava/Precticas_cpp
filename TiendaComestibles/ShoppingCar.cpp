/**
 * @file ShoppingCar.cpp
 * @author ferjava (you@domain.com)
 * @brief Contiene la implementacion de la clase carro  
 * @version 0.1
 * @date 2020-04-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "ShoppingCar.hpp"
#include "Store.hpp"
namespace fjv
{
    namespace Tienda
    {
        /**
         * @brief Destroy the Shopping Car:: Shopping Car object
         * 
         */
        ShoppingCar::~ShoppingCar()
        {
            for (shoping_list_iter=shopping_list.begin();shoping_list_iter != shopping_list.end();
                 shoping_list_iter++)
                 {
                     delete (*shoping_list_iter);
                 }    
        }
        /**
         * @brief Añade un articulo al carro seleccinado por el cliente
         * 
         * @param new_item Articulo a añadir 
         * @return fjv_return 
         */
        uint ShoppingCar::add_item(GroceryItem* new_item ,uint items_number=1) 
        {
            //Numero de articulos que nos llevamos 
            new_item->set_qtyitem(items_number);
            //Añadimos el articulo a la lista 
            shopping_list.push_back(new_item);

            return fjv_return::FJV_SUCESS;
        }
        /**
         * @brief  Esta funcion  realiza la operecion de obtener el total
         * a pagar de todos los articulos del carro 
         * 
         * Muestra en pantalla el total de los productos 
         * @return cantidad a pagar 
         */
        uint ShoppingCar::price_all_items()
        {
            uint cantidad_a_pagar = 0;
            for(shoping_list_iter= shopping_list.begin;shoping_list_iter!=shopping_list.end();
            shoping_list_iter++)
            {
                // total = (cantidadintems * precioitem) + cantidad_de_articulo_anterior
                cantidad_a_pagar =(((*shoping_list_iter)->get_qtyitem())*
                ((*shoping_list_iter)->get_priceitem()))+ cantidad_a_pagar;
            }
            return cantidad_a_pagar;

        }
        
    }
}