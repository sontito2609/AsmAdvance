#include <iostream>
#include "../include/shoes.h"
#include "../include/shoes_area.h"
#include "../include/area.h"
#include "../include/shoes_program.h"
using namespace std;
int main(int argc, char *argv[])
{
	// Footwear *stansmith = new Footwear("StanSmith", "black&white", 1);
	// Footwear *superstar1 = new Footwear("SuperStar","black&white", 2);
	// Footwear *superstar2 = new Footwear("SuperStar", "red&white", 5);
	// Area *classic = new Area("Classic Shoes");
	// classic->add_shoes(stansmith);
	// classic->add_shoes(superstar1);
	// classic->add_shoes(superstar2);

	// Footwear *yzy350 = new Footwear("Yeezy350v2", "black&white", 1);
	// Footwear *HumanRace = new Footwear("HumanRace","black&white", 2);
	// Footwear *y3 = new Footwear("Adidas Y3", "red&white", 2);
	// Area *fashion = new Area("Fashion Shoes");
	// fashion->add_shoes(yzy350);
	// fashion->add_shoes(HumanRace);
	// fashion->add_shoes(y3);
	// Area *Adidas = new Area("Adidas");
	// Adidas->add_shoes(classic);
	// Adidas->add_shoes(fashion);
	// Adidas->draw(0);

	// delete Adidas;

	//run menu
	 ShoesProgram sp;
 	 sp.run();
	//run test function
// 	string name, color;
// 	int amount;
// 	int n1, n2, n3;
// 	cout << "Enter the name of the shop: ";
// 	cin >> name;
// 	Area *shop = new Area(name);

// 	cout << "Enter number of area: ";
// 	cin >> n1;
// 	for (int i = 1; i <= n1; i++)
// 	{
// 		cout << "Enter the name of area (" << i  << "): ";
// 		cin >> name;
// 		Area *area = new Area(name);

// 		cout << "Enter number of sub-area: ";
// 		cin >> n2;
// 		for (int j = 1; j <= n2; j++)
// 		{
// 			cout << "Enter the name of sub-area (" << j   << "): ";
// 			cin >> name;
// 			Area *sub_area = new Area(name);
// 			area->add_shoes(sub_area);

// 			cout << "Enter number of footwear: ";
// 			cin >> n3;

// 			for (int k = 1; k <= n3; k++)
// 			{
// 				cout << "Enter the name of footwear (" << k << "): ";
// 				cin >> name;
// 				cout << "Enter the color of footwear (" << k   << "): ";
// 				cin >> color;
// 				cout << "Enter the amount of footwear (" << k   << "): ";
// 				cin >> amount;

// 				Footwear *product = new Footwear(name, color, amount);
// 				sub_area->add_shoes(product);
// 			}
// 		}
// 		shop->add_shoes(area);
// 	}
// 	shop->draw(0);
// }
}