#include "../include/shoes_program.h" 
#include "../include/menu_program.h"
#include "../include/area.h"
#include "../include/shoes.h"
#include "../include/shoes_area.h"

void ShoesProgram::print_menu()
{
    cout << ">----------------------------------------------------<" << endl;
    cout << "                     Shoes Program                    " << endl;
    cout << ">----------------------------------------------------<" << endl;
    cout << "                          Menu                        " << endl;
    cout << ">----------------------------------------------------<" << endl;
    cout << "$$$ Choice $$$                Function             $$$" << endl;
    cout << "$$$    " << ADD << "   $$$  Add new area and product for shop  $$$" << endl;
    cout << "$$$    " << DISPLAY << "   $$$             Display all             $$$" << endl;
    cout << "$$$    " << EXIT << "   $$$            Exit the program         $$$" << endl;
    cout << ">----------------------------------------------------<" << endl;
}
void ShoesProgram::do_task(const int &choice)
{
    switch (choice)
    {
    case ADD:
        add();
        break;
    case DISPLAY:
        display();
        break;
    case EXIT:
        break;
    default:
        print_message("Invalid option !!!");
        break;
    }
}
void ShoesProgram::add()
{
 string name, color;
	int amount;
	int n1, n2, n3;
	cout << "Enter the name of the shop: ";
	cin >> name;
	Area *shop = new Area(name);
	areas.push_back(shop);
	cout << "Enter number of area: ";
	cin >> n1;
	for (int i = 1; i <= n1; i++)
	{
		cout << "Enter the name of area (" << i  << "): ";
		cin >> name;
		Area *area = new Area(name);
	
		cout << "Enter number of sub-area: ";
		cin >> n2;
		for (int j = 1; j <= n2; j++)
		{
			cout << "Enter the name of sub-area (" << j   << "): ";
			cin >> name;
			Area *sub_area = new Area(name);
			area->add_shoesarea(sub_area);
	
			cout << "Enter number of product: ";
			cin >> n3;

			for (int k = 1; k <= n3; k++)
			{
				cout << "Enter the name of product (" << k  << "): ";
				cin >> name;
				cout << "Enter the color of product (" << k << "): ";
				cin >> color;
				cout << "Enter the amount of product (" << k  << "): ";
				cin >> amount;
				
				Shoes *product = new Shoes(name, color, amount);
				sub_area->add_shoesarea(product);
			}
		}
		shop->add_shoesarea(area);
	}
	cout << "Add Information Successfull !!!" <<endl;
}
void ShoesProgram::display()
{
        for(int i = 0; i < areas.size(); i++)
    {
        areas[i]->draw(0);
    }
}
void ShoesProgram::print_message(const string &msg)
{
	cout << msg <<endl;
}

ShoesProgram::~ShoesProgram()
{
    for (int i = 0; i < areas.size(); i++)
    {
        delete areas[i];
    }
    
}