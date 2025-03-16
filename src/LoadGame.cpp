#include <iostream>
#include <btkutil.h>
#include <fstream>
#include "Inventory.h"

const std::string savefile = "Save.txt";

void LoadGame() {
    std::fstream SaveFile(savefile, std::ios::in);
    
    if (!SaveFile) {
        std::cerr << "Error: Could not open " << savefile << " for reading!\n";
        return;
    }

    if (!(SaveFile >> weapon1 >> armour1 >> consumable1 >> material1 >> misc1)) {
        std::cerr << "Error: Failed to read data from " << savefile << "!\n";
        return;
    }

    std::cout << BTKTextColor(2) << "Game loaded!" << BTKTextColor(0) << "\n";

    SaveFile.close();
}