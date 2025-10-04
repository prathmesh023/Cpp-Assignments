//write a program to define a class and create of an object by user 

#include<iostream>
using namespace std;

class  Animal
{
    public:
        string Name;
        string colour;

        void display()
        {
            cout << "Name: " << Name << "\n" << endl;
            cout << "colour: " << colour << "\n" << endl;           
        }
};

int main()
{

    Animal H1;

    cout << "Enter the name of animal: " ;
    cin >> H1.Name; 

    cout << "Enter the colour of animal: ";
    cin >> H1.colour; 

    H1.display();

}


/*output
Enter the name of animal: Dog
Enter the colour of animal: Black
Name: Dog

colour: Black
*/
