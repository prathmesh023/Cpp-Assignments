//write a program to define a class and create of an object of the perticular class by user input an display it


#include <iostream> 
using namespace std;

class Home
{
public:
    string name;
    string colour;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Colour: " << colour << endl;
    }
};

int main()
{
    Home H1;

    cout << "Enter the name of the home: ";
   //getline(cin, H1.name);
    cin >> H1.name;


    cout << "Enter the colour of the home: ";
    cin >> H1.colour;

    H1.display();

    return 0;
}