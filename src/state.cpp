#include "../inc/state.h"

AState::AState() {
    this->setIsFinished(false);
    this->setNextStage(-1);     // -1: no stage selected
    this->setUserAction(-1);    // -1: no action selected
    this->setIsSelected(false);
}

void AState::setIsFinished(bool b) {
    this->isFinished = b;
}
int AState::getIsFinished() {
    return this->isFinished;
}

void AState::setNextStage(int stageID) {
    this->nextStage = stageID;
}
int AState::getNextStage() {
    return this->nextStage;
}

void AState::setUserAction(int stageID) {
    this->userAction = stageID;
}
int AState::getUserAction() {
    return this->userAction;
}

void AState::setIsSelected(bool b) {
    this->isSelected = b;
}
bool AState::getIsSelected() {
    return this->isSelected;
}
