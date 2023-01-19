#ifndef QUESTIONARRE_H
#define QUESTIONARRE_H
#include <iostream>
using namespace std;
class Person{
    public:
    Person(string name){m_name = name;};
    string getName();
    string getFirst();
    string getSecond();
    string getLast();
    void setName(string answer);
    void setFirst(string answer);
    void setSecond(string answer);
    void setLast(string answer);
    void displayResults();
    private:
    string m_name;
    string m_firstQuestion;
    string m_secondQuestion;
    string m_lastQuestion;
};
#endif