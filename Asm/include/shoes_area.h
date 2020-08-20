#ifndef _SHOES_AREA_H_
#define _SHOES_AREA_H_
#include <iostream>
#include <string>
using namespace std;
class ShoesArea
{
    protected:
        string name;
    public:
        ShoesArea();
        ShoesArea(const string &name);
        string get_name() const;
        virtual void draw(const int &level) const = 0;
        virtual int get_amount() const = 0;
        virtual ~ShoesArea();
    protected:
        void draw_spaces(const int &level) const;
}; 
#endif
