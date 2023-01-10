#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
	//Constructors
	Critter();
	Critter(std::string);
	Critter(std::string, int, int, double height=10);
	//setter
    void setHunger(int);
    //getter
    int getHunger();
    //service method
	void print();
};
