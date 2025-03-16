#include <iostream>
#include <btkutil.h>
#include "engine.h"

int main(){
    system("clear");
    std::cout << "Enter '" << BTKTextColor(2) << "Help" << BTKTextColor(0) << "' to get a list of commands...\n";
    Engine engine;
    engine.waitForInput();
    return 0;
}
