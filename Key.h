//
//  Key.h
//  Final Project 2017 Spring
//
//  Created by Xavier Prospero on 5/6/17.
//  Copyright © 2017 Xavier Prospero. All rights reserved.
//

#ifndef Key_h
#define Key_h


//      ***** Product Identifier Class Declarations ******
//
//      - "ITEM KEY"
//          - Defines each product type. Consists of 3 identifiers
//
//      - "SN" -> (Serial Number)
//          - Each specific item has its respective number
//          - Defines algorithm for permamant serial number.
//


#include <string>

/**********************************************************
 *                                                        *
 *                                                        *
 *                ITEM KEY CLASS DEFINITION               *
 *                                                        *
 *                                                        *
 **********************************************************/



class ItemKey
{
    
private:
    
    
    static const int KEY_SIZE = 3;
    
    std::string itemKey[KEY_SIZE];              // Each element corresponds to a different portion of the key
    
    
public:
    
    
    ItemKey()                               // Default constructer: sets to 0
    {
        itemKey[1] = nullptr;
        
        itemKey[2] = nullptr;
        
        itemKey[3] = nullptr;
    
    }
    
    
    ItemKey (std::string one, std::string two, std::string three)       // Constructer that sets the values to arguments
    {
        
        itemKey[1] = one;
        
        itemKey[2] = two;
        
        itemKey[3] = three;
        
    }

    
    void setKey(std::string one, std::string two, std::string three)       //Allows you to manually set the product key
    {
        
        itemKey[1] = one;
        
        itemKey[2] = two;
        
        itemKey[3] = three;
        
    }
    
};


//
//  Element 1:      Product key  [P, C, ]
//  Element 2:      Model type [Samp, (BC, C, G)]
//  Element 3:      Further Specifier [(.9, 1.4), (BA, CK)]
//



/**********************************************************
 *                                                        *
 *                                                        *
 *                Serial # CLASS DEFINITION               *
 *                                                        *
 *                                                        *
 **********************************************************/

//
// Creates a new Serial Number for each Product that exists
// Is included in the inventory class
//
//
//
class SerialNumber
{
    
private:
    
    static const int SN_SIZE = 7;                       // Size of SN
    
    
    std::string SN;                                     // Actual array that holds the SN
    
    
public:
    
    static int staticCounter;                                 // Determines the value of each SN
    
    
    SerialNumber ()                                                   // Creates the specific SN for each Product.
    {
    
        std::string n = std::to_string(staticCounter);
        
        SN = n;
        
        for (int i = 0; i < (SN_SIZE); i++)
        {
            SN = ("0" + SN);
        }
        
        staticCounter ++;
    
    }
    
    std::string getSN()                                               // Get function. Returns SN
    {
        return SN;
    }
    
    
    
    
    
};

int SerialNumber::staticCounter = 1;




#endif /* Key_h */
