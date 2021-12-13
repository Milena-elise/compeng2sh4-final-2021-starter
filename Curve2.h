//Curve2.h
#include "ScoreBank.h"


class Curve2 : public ScoreBank 
{
    //size is still same, we wont be changing
    protected:
    int* scores1 = scores;
    float avg1 = avg;
    
    public:
    //constructor/deconstructor
    Curve2();
    ~Curve2();
    
    //methods
    void Curve();
    void printScores();

};
