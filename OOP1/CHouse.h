#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class House {
private:
    char* m_street;
	std::string m_city;
	size_t m_width=27;
	size_t m_height=27;

public:

	//Constructor
	House();
	 //Overloaded Constructor
	House(const char* t_street, std::string t_city, size_t t_width, size_t t_height);
	House(std::string t_city, size_t t_width, size_t t_height);
	//Parameterized 2
	House(size_t t_height, size_t t_width);
	House(size_t t_height);
	
	//Destructor
	~House();

	char* GetStreet() { return this->m_street;}
	std::string GetCity() { return this->m_city;}
	size_t GetWidth() {return this->m_width;}
	size_t GetHeight() {return this->m_height;}

	void SetStreet(const char* t_street);
	void SetCity(std::string t_city);
	void SetWidth(size_t t_width);
	void SetHeight(size_t t_height);
	
	//Zum Anzeigen von den Werten
	void Display();

	//Kopierkonstruktor
	House(House& const original);

	//ü. Zuweisungsoperator
	House& operator=(House& const original);
};

