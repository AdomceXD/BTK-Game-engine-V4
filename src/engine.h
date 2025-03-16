#include <iostream>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>
#include <cstdlib>
#include <termios.h>
#include <string>
#include <thread>
#include <btkutil.h>
#include "Inventory.h"
#include "SaveGame.h"
#include "LoadGame.h"

class Engine {
public:
    void waitForInput() {
        setTerminalMode();
        std::string input;
        while (true) {
            printf("> ");
            std::getline(std::cin, input);
            if (input == "help"){
                BTKmargin(23);
                printf("┌──────────────────────────────────────────────┐\n");BTKmargin(23);
                printf("| 'help' ─ Print help sheet                    |\n");BTKmargin(23);
                printf("|                                              |\n");BTKmargin(23);
                printf("|                                              |\n");BTKmargin(23);
                printf("| 'inventory'                                  |\n");BTKmargin(23);
                printf("| 'load'                                       |\n");BTKmargin(23);
                printf("| 'save'                                       |\n");BTKmargin(23);
                printf("| 'exit' ─ Exit the game                       |\n");BTKmargin(23);
                printf("└──────────────────────────────────────────────┘\n");
            } else if (input == "exit") {
                system("clear");
                break;
            } else if (input == "clear") {
                system("clear");
            } else if (input == "inventory") {
                PrintInventory();
            } else if (input == "save") {
                SaveGame();
            } else if (input == "load") {
                LoadGame();
            }   else {
                //std::cout << "Unknown command..." << std::endl;
            }
        }
        restoreTerminalMode();
    }
private:
    struct termios originalTermios;

    void setTerminalMode() {
        tcgetattr(STDIN_FILENO, &originalTermios);

        struct termios newTermios = originalTermios;
        /*Uncomment these 2 lines below if you don't want to see input commands*/
        //newTermios.c_lflag &= ~ICANON; // Disable canonical mode
        //newTermios.c_lflag &= ~ECHO;   // Disable echoing input characters

        tcsetattr(STDIN_FILENO, TCSANOW, &newTermios);
    }

    void restoreTerminalMode() {
        tcsetattr(STDIN_FILENO, TCSANOW, &originalTermios);
    }
};
