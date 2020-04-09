/**
 * @file Storage.cpp
 * @author your name (you@domain.com)
 * @brief Contiene la implementacion de la clase Storage 
 * @version 0.1
 * @date 2020-04-09
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "Storage.hpp"
#include <list>
#include <algorithm>
namespace fjv
{
    namespace Tienda
    {
        /**
         * @brief Construct a new Storage:: Storage object
         * Constructor de la lista que contiene un puntero hacia una tienda 
         * 
         * @param tienda 
         */
        Storage::Storage(Store* value_tienda )
        {
            
            tienda = value_tienda;///< Asignamos el puntero a tienda
        }
        /**
         * @brief Inicializa la lista 
         * 
         * @return fjv_return::FJV_SUCESS si ha tenido exito 
         */
        uint Storage::init()
        {
            //TODO:
            return fjv_return::FJV_SUCESS ;
        }
        /**
         * @brief Actualiza el invetario y espera que haya cambios 
         * 
         * @return fjv_return::FJV_SUCESS si ha tenido exito
         */
        uint Storage::update()
        {
            //TODO:
            return fjv_return::FJV_SUCESS;
            
        }
        /**
         * @brief Finaliza el inventario guardando todos los articuloes 
         * 
         * @return uint 
         */
        uint Storage::exit()
        {
             //TODO:
             return fjv_return::FJV_SUCESS;   
        }
        /**
         * @brief Añade un articulo a la lista 
         * 
         * @param item_value puntero a un objeto  
         * @return fjv_return::FJV_SUCESS si todo  ha salido corretamente  
         */
        uint Storage::add_item (GroceryItem* item_value)
        {
            grocery_list.push_back(item_value);
            
            return fjv_return::FJV_SUCESS;
        }
        /**
         * @brief Elimina el articulo de la lista 
         * 
         * @param item_value  puntero al objeto a eliminar
         * @return fjv_return__FJV_SUCESS
         */
        uint Storage::del_item (GroceryItem* item_value)
        {
            std::list<GroceryItem*>::iterator tmp_iter;
            tmp_iter = std::find(grocery_list.begin(),grocery_list.end(),item_value);
            if(tmp_iter != grocery_list.end())
            {
                grocery_list.erase(tmp_iter);
            }
            else
            {
                /* code */
                return fjv_return::FJV_ERROR;
            }
            
            return fjv_return::FJV_SUCESS;
        }
        /**
         * @brief Decrementa el numero de articulos disponibles en ese almacen  
         * 
         * @param item_value Articulo al que decrementar 
         * @param arquit  numero de articulos que reducir
         * @return uint  fjv_return::FJV_SUCESS
         */
        uint Storage::drecease_item(GroceryItem* item_value , uint arquit)
        {   
            std::list<GroceryItem*>::iterator tmp_iter;
            tmp_iter = std::find (grocery_list.begin(),grocery_list.end(),item_value);
            if(tmp_iter != grocery_list.end())
            {
                
                int tmp_value = (*tmp_iter)->get_qtyitem();
                if((tmp_value - arquit) > 0)
                {
                (*tmp_iter)->set_qtyitem(tmp_value - arquit);
                return fjv_return::FJV_SUCESS;
                }
                else 
                {
                  throw ExMaxItemExceded()  ; ///< No hay suficientes en el alamacen 
                  return fjv_return::FJV_ERROR;      
                }


                  

            }
        } 
        /**
         * @brief Añade mas cantidad a ese articulo 
         * 
         * @param item  articulo al que se refiere 
         * @param add_value  cantidad a la que se refiere 
         * @return fjv_return
         */
        uint Storage::increases_item(GroceryItem* item , uint add_value)
        {
            std::list<GroceryItem*>::iterator tmp_iter;
            tmp_iter = std::find (grocery_list.begin(),grocery_list.end(),item_value);
            if(tmp_iter != grocery_list.end())
            {
                (*tmp_iter)->set_qtyitem(((*tmp_iter)->get_qtyitem())+add_value);
                return fjv_return::FJV_SUCESS;
            }

        }



    }
}