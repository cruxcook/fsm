#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <iostream>
#include <unistd.h> // For `usleep()`
#include <stdlib.h> // For `system("clear")`

using namespace std;

#include "./menu.h"

class CStateManager {    // Class
    private:
        bool isRunning;
        int state;

        CMenu menu;

    public:
        CStateManager();

        void setIsRunning(bool b);
        bool getIsRunning();

        void setState(int stateID);
        int getState();

        void runState();
        void updateState();
        void exitState();
};

#endif  // STATE_MANAGER_H
