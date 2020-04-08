#ifndef GROCERYITEM_HPP
#define GROCERYITEM_HPP
/**
 * @file GroceryItem.hpp
 * @author ferjava 
 * @brief  GroceryItem (Articulo del Supermercado ) Contiene la infromacion sobre los articulos 
 * @version 0.1
 * @date 2020-04-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <string>
#include <iostream>

#pragma once
namespace fjv
{

    namespace Tienda
     { 
         
         
         class ExMaxItemExceded {
                 public:
                 void mensaje() {std::cout <<" no hay suficientes articulos"<< std::endl;};


             };

          
        /**
         * @class GroceryItem 
         * @brief Con esta clase se crearan los objetos 
         * 
         */ 
        
         
         class GroceryItem
         {
             private:
                std::string name_item;///< Nombre del articulo
                unsigned int item_price ; ///< Precio articulo
                unsigned int qty_on_hand ; ///< Cantidad disponible 
                unsigned int qty_purchase = 0; ///< Cantidas a comprar 
             public:
                ///Constructores
                
                /**
                 * @brief Construct a new Grocery Item object
                 * Construye un Articulo vacio
                 */
                 
                GroceryItem();//Constructor por defecto 
                /**
                 * @brief Construct a new Grocery Item object
                 * Construye un articulo concreto 
                 * @param name_value    nombre del articulo 
                 * @param price_value   precio del articulo 
                 * @param qty_value     Cantidad de articulos disponible   
                 */
                
                GroceryItem(std::string name_value , u_int price_value , u_int qty_value );//< Constructor para añadir articulos
               /**
                * @brief Construct a new Grocery Item object
                * Constructor de copia
                * @param GroceryItem 
                */
                GroceryItem(const GroceryItem &);
                
                /**
                 * @brief Destroy the Grocery Item object
                 * 
                 */
               
                virtual ~GroceryItem();
                ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
                ///Modificadoras (get/set)
                
                //set
                /**
                 * @brief Set the nameitem object
                 * pon el nombre del articulo 
                 * @param value_name 
                 */
                void set_nameitem(std::string value_name) { name_item = value_name;};///< Pon nombre del articulo 
                /**
                 * @brief Set the priceitem object
                 * Pon el precio del articulo 
                 * @param price_value 
                 */
                void set_priceitem(uint price_value) {item_price = price_value;};///< Pon precio al articulo 
                /**
                 * @brief Set the qtyitem object
                 * Pone la cantidad de articulos que disponemos 
                 * @param qty_value 
                 */
                void set_qtyitem(uint qty_value){qty_on_hand = qty_value;};///< Pon cantidad de articulos disponibles
                /**
                 * @brief Set the qtypurchased object
                 * Pon la cantidad de articulos que quiere el usuario 
                 * @param qty_purchased_value 
                 */
                void set_qtypurchased(uint qty_purchased_value ){qty_purchase = qty_purchased_value; };
                //get
                /**
                 * @brief Get the nameitem object
                 * regresa el nombre del articulo 
                 * @return std::string 
                 */
                std::string get_nameitem(){return name_item;};///< Regresa el nombre del articulo 
                /**
                 * @brief Get the priceitem object
                 * regresa el precio del articulo 
                 * @return uint 
                 */
                uint get_priceitem (){return item_price;};///< Regresa el precio del articulo 
                /**
                 * @brief Get the qtyitem object
                 * Regresa la cantidad de articulos disponibles
                 * @return uint 
                 */
                uint get_qtyitem (){return qty_on_hand;};///< Regresa la cantidad  de articulos que dispone la tienda 
                /**
                 * @brief Get the qtypurchased object
                 * Regresa el numero de articulos que solicita el usuario 
                 * @return uint 
                 */
                uint get_qtypurchased ();///< Regresa el numero de articulos comprados por el usuario 

                /**
                 * @brief Excepcion que salta cuando no hay suficientes productos para comprar 
                 * 
                 */
              


         };

       
     }    
 
 


}
 
#endif //GROCERYITEM_HPP
