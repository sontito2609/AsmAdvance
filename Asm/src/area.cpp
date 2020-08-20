#include "../include/shoes.h"
#include "../include/shoes_area.h"
#include "../include/area.h"

Area::Area() : ShoesArea("New Area")
{

}

Area::Area(const string &name) : ShoesArea(name)
{

}
 
void Area::add_shoesarea(ShoesArea *Shoes)
{
    shoesArea.push_back(Shoes);
}

void Area::draw(const int &level) const
{
    draw_spaces(level);
    cout << "|" << "___" << "(+) " << name << "(" <<get_amount() << ")" <<endl;
    for (int i = 0; i < shoesArea.size(); i++)
    {
        shoesArea[i]->draw(level+1);
    }
    
}
int Area::get_amount() const
{
    int amount = 0;
    for (int i = 0; i < shoesArea.size(); i++)
    {
        amount += shoesArea[i]->get_amount();
    }
    return amount;
}
Area::~Area()
{
    for (int i = 0; i < shoesArea.size(); i++)
    {
        if (shoesArea[i] != 0)
        {
            delete shoesArea[i];
            shoesArea[i] = 0;
        }
        
    }
    
}