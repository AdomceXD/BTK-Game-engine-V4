#include <iostream>
#include <btkutil.h>
#include <string>

int weapon1 {0};
int armour1 {0};
int consumable1 {0};
int material1 {0};
int misc1 {0};

void PrintInventory(){
    std::string ch;
    std::cout << "Choose a category (weapons, armour, consumables, materials, misc): "; std::cin >> ch;
    if(ch != "weapons" && ch != "armour" && ch != "consumables" && ch != "materials" && ch != "misc"){
        std::cout << "Invalid choice!";
    } else if(ch=="weapons"){
        std::cout << "Weapon1: " << "{" << BTKTextColor(2) << weapon1 << BTKTextColor(0) << "}" << "\n";
    } else if(ch=="armour"){
        std::cout << "Armour1: " << "{" << BTKTextColor(2) << armour1 << BTKTextColor(0) << "}" << "\n";
    } else if(ch=="consumables"){
        std::cout << "Consumable1: " << "{" << BTKTextColor(2) << consumable1 << BTKTextColor(0) << "}" << "\n";
    } else if(ch=="materials"){
        std::cout << "Materials1: " << "{" << BTKTextColor(2) << material1 << BTKTextColor(0) << "}" << "\n";
    } else if(ch=="misc"){
        std::cout << "Misc1: " << "{" << BTKTextColor(2) << misc1 << BTKTextColor(0) << "}" << "\n";
    } else {

    }
}