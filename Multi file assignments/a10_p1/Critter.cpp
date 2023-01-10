#include <iostream>
#include "Critter.h"

//defining constructors
Critter::Critter(){
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(std::string newname){
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(std::string newname, int newhunger, int newboredom, double newheight){
    name = newname;
    hunger = newhunger/100.0;
    boredom = newboredom;
    height = newheight;
}

//Defining methods
void Critter::setHunger(int newhunger){
	hunger = newhunger/100.0;
}

int Critter::getHunger(){
    return hunger*100.0;
}

void Critter::print(){
    std::cout << "Name = " << name << std::endl;
    std::cout << "Hunger = " << getHunger() << std::endl;
    std::cout << "Boredom = " << boredom << std::endl;
    std::cout << "Height = " << height << std::endl;
}
