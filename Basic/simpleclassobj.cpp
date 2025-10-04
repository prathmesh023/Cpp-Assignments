//write a program to define a class and create of an object of the perticular class an display it

#include<iostream>
using namespace std;

class Home
{
public:
    string name;
    string colour;

    void display()
    {
        cout << "Name: " << name << "\n" << endl;
        cout << "Colour: " << colour << "\n" << endl;
    }
};
  
int main()

{
    Home H1;
    H1.name = "Prathmesh";
    H1.colour = "Orange";
    H1.display();
    
}

/*output=
Name: Prathmesh

Colour: Orange
*/