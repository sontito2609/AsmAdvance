#include "../include/shoes_area.h"

ShoesArea::ShoesArea()
{
    name = "New Shoes";
}

ShoesArea::ShoesArea(const string &name)
{
    this->name = name;
}
string ShoesArea::get_name() const
{
    return name;
}
ShoesArea::~ShoesArea()
{
    
}
void ShoesArea::draw_spaces(const int &level) const
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}
