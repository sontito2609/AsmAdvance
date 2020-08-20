#ifndef _SHOES_H_
#define _SHOES_H_
#include "../include/shoes_area.h"
#include <iostream>
#include <string>
using namespace std;
class Shoes : public ShoesArea
{
    private:
        int amount;
        string color;
    public:
       Shoes();
       Shoes(const string &name, const string &color, const int &amount);
       string get_color() const;
       void set_color(const string &color);
       int get_amount() const;
       void set_amount(const int &amount);
       void draw(const int &level) const;     
};        
#endif