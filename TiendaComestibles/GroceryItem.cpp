
/**
 * @file GroceryItem.cpp
 * @author ferjava(you@domain.com)
 * @brief  Implementacion de la clase GroceryItem
 * @version 0.1
 * @date 2020-04-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "GroceryItem.hpp"
namespace fjv
{
    namespace Tienda 
    {
        GroceryItem::GroceryItem()
        {
            item_price = 0;
            name_item = nullptr;
            qty_on_hand = 0;
            qty_purchase = 0;
        }
        GroceryItem::GroceryItem(std::string name ,uint price,uint qty):name_item(name),
                                                                        item_price(price),
                                                                        qty_on_hand(qty)  
                                                                        
          {
              //TODO: Contructor 
          } 
        GroceryItem::~GroceryItem()
          {
              //TODO: destructor 
          }
        uint GroceryItem::get_qtypurchased()
        {
             
                    if((qty_purchase)>(qty_on_hand))
                    { 
                        throw ExMaxItemExceded()  ;
                    }
                    
                    return qty_purchase;
                    
        }

    }
}