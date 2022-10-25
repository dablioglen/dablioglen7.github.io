#include <iostream>
#include <string>
using namespace std;

int main()
{   string myName = "Gleendon Dablio";
    string myNickname = "Glen";
    string myAge = "20";
    string fathers_name = "Gleendon Dablio Sr.";
    string myAddress = "298 General Segundo Corner Abad Santos Baranggay Little Baguio Sanjuan City";
    string myMother_name = "Margie Dablio";
    string siblings = "2";
    string sibling_1 = "- Gliezel Dablio";
    string sibling_2 = "- Glexie Dablio";
    string myCourse = "BSIT DATA SCIENCE";
    string myReason = "i love it and i want to be part of biggest company for my future job in the field of Technology Industry";
    string hobby_1 = "- drawing";
    string hobby_2 = "- dancing";
    string dream = "Manga Artist";
    string Month = "October";
    string school ="UNIVERSIDAD DE MANILA";
    int month = 10;
    int day = 7;
    int year = 2002;
    int lucky_number = month + day + year;
    cout <<"\n";
    cout <<"\n";
    cout <<"------------------GLEENDON DABLIO BIO-----------------\n";
    cout << "My name is "+myName+" my nickname is " +myNickname+"\n";
    cout << "I am "  +myAge+" years old, I live at "+myAddress+"\n";
    cout << "My father's name is "+fathers_name+" and my mother's name is "+myMother_name+"\n";
    cout << "I have "+siblings+" siblings and they are:"+"\n";
    cout <<(sibling_1)+"\n";
    cout <<(sibling_2)+"\n";
    cout <<"Im currently taking "+myCourse+" at "+school+"\n";
    cout <<"I took "+myCourse+" because "+myReason+"\n";
	cout <<"My hobbies are: \n";
	cout <<(hobby_1)+"\n";
	cout <<(hobby_2)+"\n";
    cout <<"I want to be a "+dream+"\n";
	cout << "I was born "+Month+"-"+to_string(day)+"-"+to_string(year)+"\n";
	cout << "My lucky number is: "+to_string(lucky_number)+"\n";
	cout << "My alias name is: "+myNickname+to_string(lucky_number);
    return 0;   
}
