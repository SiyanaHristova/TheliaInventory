//
//  Artist.hpp
//  Final Project 2017 Spring
//
//  Created by Xavier Prospero on 5/6/17.
//  Copyright © 2017 Xavier Prospero. All rights reserved.
//

#ifndef Artist_h
#define Artist_h

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Artist
{
private:
    
    string name;
    string genre;
    bool reach;
    //vector<>(); - product given for free
    double moneySpent;
    double worthness;
    map<string, int>influence;
    
public:
    
    Artist(string a, string b, bool c, double d, int e, int g, int h, int i)
    {
        name = a;
        genre = b;
        reach = c;
        moneySpent = d;
        influence["Facebook"] = e;
        influence["Instagram"] = g;
        influence["Twitter"] = h;
        influence["Youtube"] = i;
    }
    
    string getName()
    {return name;}
    
    string getGenre()
    {return genre;}
    
    void setReach(bool a)
    {reach = a;}
    
    bool getReach()
    {return reach;}
    
    double getMoneySpent()
    {return moneySpent;}
    
    double getWorthness()
    {return worthness;}
    
    void addMoneySpent( double a)
    { moneySpent += a;}
    
    void calcWorthness();
    
    // Prints out the number of followers (values) on all three keys
    void getInfluence();
    
};






#endif /* Artist_h */
