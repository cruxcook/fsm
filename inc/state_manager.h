#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <iostream>
#include <unistd.h> // For `usleep()`
#include <stdlib.h> // For `system("clear")`

using namespace std;

class CStateManager {    // Class
    private:
        bool isRunning;
        int state;

    public:
        CStateManager();

        void setIsRunning(bool b);
        bool getIsRunning();

        void setState(int stateID);
        int getState();

        void run();
        void update();
        void load(int stateID);
        void exit();
};

#endif  // STATE_MANAGER_H
