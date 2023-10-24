#ifndef STATE_H
#define STATE_H

// Abstract (a blueprint with some implementations, cannot be instantiated)  
class AState {      
    private:
        bool isFinished;
        int nextStage;
        int userAction;
        bool isSelected;

    public:
        AState();

        void setIsFinished(bool b);
        int getIsFinished();

        void setNextStage(int stageID);
        int getNextStage();

        void setUserAction(int stageID);
        int getUserAction();

        void setIsSelected(bool b);
        bool getIsSelected();

        virtual void update() = 0;  // pure virtual func (abstract method)
        virtual void display() = 0; // pure virtual func (abstract method)
};  // * Don't forget `;`

#endif  // STATE_H
