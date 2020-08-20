#ifndef _SHOES_PROGRAM_H_
#define _SHOES_PROGRAM_H_

#include "menu_program.h"
#include "area.h"

#include <iostream>
#include <vector>
using namespace std;
#define ADD 1
#define DISPLAY 2
#define EXIT 0
class ShoesProgram : public MenuProgram
{
private:
    vector<Area*> areas;
protected: 
    void print_menu();
    void do_task(const int &option);
private:
    void add();
    void display();
    void print_message(const string &msg);
public:
    ~ShoesProgram();
};

#endif