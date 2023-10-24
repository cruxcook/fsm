#include "../inc/state_manager.h"

CStateManager::CStateManager() {
    this->setIsRunning(true);
    this->setState(0);  // 0: Main menu; 1: Actions; 2: About; 3: Exit
}

void CStateManager::setIsRunning(bool b) {
    this->isRunning = b;
}
bool CStateManager::getIsRunning() {
    return this->isRunning;
}

void CStateManager::setState(int stateID) {
    this->state = stateID;
}
int CStateManager::getState() {
    return this->state;
}


void CStateManager::run() {
    cout << "...Running...";
}

void CStateManager::update() {
    cout << "...Updating...";
}

void CStateManager::load(int stateID) {
    cout << "...Loading...";

}

void CStateManager::exit() {
    cout << "...Exiting...";
}

