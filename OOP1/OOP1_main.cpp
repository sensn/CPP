#include <stdlib.h>
#include "CHouse.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
int main() {

	//House *myHouse = new House();
	//
	//myHouse[0].Display();
	////myHouse->Display();

	//House yourHouse("Sesamstrasse", "Fohnsdorf", 77, 99);
	//yourHouse.Display();


	//yourHouse.Display();
	std::string mys = "SesAM";

	House* ourHouse = new House[3]{ {1},{3,4},{mys,127,255} };
	ourHouse[0].Display();
	ourHouse[1].Display();

	
	
	
	//ourHouse[0].Display();
}