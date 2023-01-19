#include "Questionarre.cpp"

int main(){
string name;
string first,second,last;
cout << "Welcome to this questionarre, you will be asked 3 questions about your thoughts on pets" << endl;
cout << "To start, What is your name?" << endl;
cin >> name;
Person myPerson = Person(name);
cout << "First Question: Do you own a pet?: " << endl;
cin >> first;
myPerson.setFirst(first);
cout << "Second Question: If you have a pet what do you like about it, if not, why not?:" << endl;
cin >> second;
myPerson.setSecond(second);
cout << "Third Question: Will you get any other pet?: " << endl;
cin >> last;
myPerson.setLast(last);
cout << "Here are the results" << endl;
myPerson.displayResults();
return 0;   
}