#include "../include/shoes.h"
#include "../include/shoes_area.h"
#include "../include/area.h"

Shoes::Shoes() : ShoesArea("New Shoes")
{
    amount = 0;
}
Shoes::Shoes(const string &name, const string &color, const int &amount) : ShoesArea(name)
{   
    this->amount = amount;
    this->color = color;
} 
void Shoes::draw(const int &level) const
{
    draw_spaces(level);
    cout << "   |" << "__" << "(-)" << name << " - " << color << " - " << amount <<endl;
}
int Shoes::get_amount() const
{
    return amount;
}
string Shoes::get_color() const
{
    return color;
}
