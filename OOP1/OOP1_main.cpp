#include <stdlib.h>
#include "CHouse.h"
#include "Input_Buffer_Events.hpp"
//#include "windows.h"
#include <iostream>
#include <list>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main() {
	


			input_Buffer_Events_main();
	


	//House *myHouse = new House();
	//
	//myHouse[0].Display();
	////myHouse->Display();

	//House yourHouse("Sesamstrasse", "Fohnsdorf", 77, 99);
	//yourHouse.Display();


	//yourHouse.Display();
	std::string mys = "Sesam";
	
	
   char a[5]="fooo";
	const char array[] = "Hello world";
	

	const char* c = "hello";
	size_t objCount = 5;

	// allocates and constructs five objects:
	//House* ourHouse = new House[objCount]{ {1},{3,4},{mys,127,255},{array,mys,127,255},{"Direct Street",mys,127,255} };


	House* ourHouse = new House[5]  { {(1)},{3,4},{mys,127,255},{a,mys,127,255},{"Direct Street",mys,127,255} };
	ourHouse++;
	ourHouse++;
	//ourHouse->Display();
	// new []
	//delete[5]  ourHouse;
	
	std::list<House*> listOfHouses;
	std::list<House*>::iterator it;

	House *p = new House(123);
	p->id = 0;
	listOfHouses.push_back(p);   //ein element einf�gen
	
	//listOfHouses.insert(listOfHouses.begin(),p );

	for (auto v : listOfHouses){
		std::cout << v << "\n";
		v->Display();
		std::cout <<  "\n";
}



	//printf("\x1b[38;2;255;100;0mTRUECOLOR\x1b[0m\n");

//	test();
	/*House* yourHouse[2];
	yourHouse[0] = new House();
	delete yourHouse[1];*/

	//delete [] ourHouse;

	//ourHouse[0].Display();
	

	
		
	//	for (size_t i = 0; i < objCount; i++) {
	//	//std::cout << "______________" << "House Number" << i<< std::endl;
	//	ourHouse[i].Display();
	//}
//		delete [] ourHouse;
		
		//delete yourHouse[0];
   //delete  yourHouse[0];
	    
	
	
	//ourHouse[0].Display();



//***______________
	int n = 4; // dynamic size of the array;
	House** HouseArray = new House* [n];
	for (int i = 0; i != n; ++i)
	{
		HouseArray[i] = new House(13);
	}

	HouseArray[3]->Display();

	for (int i = 0; i != n; ++i)
	{
		delete HouseArray[i];
	}
	delete[] HouseArray;

	//test();
}



