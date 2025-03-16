#include <iostream>
#include <btkutil.h>
#include <fstream>
#include <string>
#include "Inventory.h"

const std::string savefile = "Save.txt";

void SaveGame() {
    std::fstream SaveFile(savefile, std::ios::out);
    
    if (!SaveFile) {
        std::cerr << "Error: Could not open " << savefile << " for writing!\n";
        return;
    }

    SaveFile << weapon1 << "\n"
             << armour1 << "\n"
             << consumable1 << "\n"
             << material1 << "\n"
             << misc1 << "\n";

    if (!SaveFile) {
        std::cerr << "Error: Failed to write to " << savefile << "!\n";
    } else {
        std::cout << BTKTextColor(2) << "Game saved!" << BTKTextColor(0) << "\n";
    }

    SaveFile.close();
}