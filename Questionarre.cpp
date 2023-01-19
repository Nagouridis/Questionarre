#include "Questionarre.h"



string Person::getName(){
    return m_name;
}

string Person::getFirst(){
    return m_firstQuestion;
}

string Person::getSecond(){
    return m_secondQuestion;
}

string Person::getLast(){
    return m_lastQuestion;
}

void Person::setName(string answer){
    m_name = answer;
}

void Person::setFirst(string answer){
    m_firstQuestion = answer;
}

void Person::setSecond(string answer){
    m_secondQuestion = answer;
}

void Person::setLast(string answer){
    m_lastQuestion = answer;
}

void Person::displayResults(){
    cout << "Your Name Is: " << getName() << endl;
    cout << "Your first answer is: " << getFirst() << endl;
    cout << "Your second answer is: " << getSecond() << endl;
    cout << "Your last answer is: " << getLast() << endl;
}