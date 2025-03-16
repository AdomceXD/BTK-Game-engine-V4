#include <iostream>
#include <btkutil.h>
#include "engine.h"

int main(){
    system("clear");
    printf("Enter 'help' command for a list of commands...\n");
    Engine engine;
    engine.waitForInput();
    return 0;
}