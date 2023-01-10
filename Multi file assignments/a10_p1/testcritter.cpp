/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a10_p6
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

//using namespace std;

int main()
{
    //defining objects of the class
    Critter c1;
    Critter c2("Second Critter");
	Critter c3("Hello name",5,11);
	Critter c4("NewName",15,22,3.5);

	//setting their hungers to 2
    c1.setHunger(2);
    c2.setHunger(2);
    c3.setHunger(2);
    c4.setHunger(2);

    //printing the details of each objects
    std::cout << "\n" << "First instance: " << std::endl;
    c1.print();
    std::cout << "\n" << "Second instance: " << std::endl;
    c2.print();
    std::cout << "\n" << "Third instance: " << std::endl;
    c3.print();
    std::cout << "\n" << "Fourth instance: " << std::endl;
    c4.print();

    return 0;
}
