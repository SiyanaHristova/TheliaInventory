//
//  inventory item.h
//  Final Project 2017 Spring
//
//  Created by Xavier Prospero on 5/3/17.
//  Copyright © 2017 Xavier Prospero. All rights reserved.
//

#ifndef inventory_item_h
#define inventory_item_h

#include <string>
#include "Key.h"

using namespace std;

/***********************************************************
 *                                                         *
 *                                                         *
 *         INVENTORY ITEM SHELL PARENT CLASS               *
 *                                                         *
 *                                                         *
 ***********************************************************/

//  Parent Class
//      - to structure the various aspects of the more specific items.
//      - holds product key, price, serial number
//

//
//  Holds specific attributes that exist throughout all Inventory.
//      - Price
//      - Item Serial Number
//      - Item Key
//      - Amount of Item
//



class InventoryItem
{
    
public:
    
//  Variables
    
    
    string name;
    
    double price;                                           // Price of element.
    
    
//  Classes
    
    
    SerialNumber itemSN;
    
    ItemKey key;
    
    
//  Constructer
    
    
    InventoryItem ( string a, double b, string k1 )                     // Specific COnstructer for new item
    {
        
        name = a;
        
        price = b;
        
        key.setKey(k1, 0, 0);
        
    }

    InventoryItem();                                                    // Default Constructer
    

};




/***********************************************************
 *                                                         *
 *                                                         *
 *                      CAPO CLASS                         *
 *                                                         *
 *                                                         *
 ***********************************************************/
//
//  Daughter of the Inventory Class.
//      - Static Variable of: Key[1]
//
//


class Capo: public InventoryItem
{
private:
    
    const double CAPO_PRICE = 69.99;
    
public:
    
    
    Capo () : InventoryItem()
    {
        key.setKey("C200", 0 , 0);
        
        price = CAPO_PRICE;
        
        name = "Capo";
    }
    

    double getPrice()
    {
        return price;
    }
    
};

    

    
    
/***********************************************************
 *                                                         *
 *                                                         *
 *                      PICK CLASS                         *
 *                                                         *
 *                                                         *
 ***********************************************************/
    
    
    


#endif /* inventory_item_h */
