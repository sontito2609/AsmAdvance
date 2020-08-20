#ifndef _AREA_H_
#define _AREA_H_
#include "../include/shoes_area.h"
#include "../include/shoes.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std; 
class Area : public ShoesArea
{
    private:
        vector<ShoesArea*> shoesArea;
    public:
        Area();
        Area(const string &name);
        int get_amount() const;
        void draw(const int &level) const;
        void add_shoesarea(ShoesArea* Shoes); 
        ~Area();
};
#endif