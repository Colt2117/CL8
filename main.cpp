#include <iostream>
#include <string>
#include <istream>
#include <fstream>
#include "Dictionary.hpp"
using namespace std;


void LoadDictionary()
{
	ifstream input("Dictionary.txt");

	string english, esperanto, line;

	Dictionary enToEO =  Dictionary();
	getline(input, line);
	while (getline(input, line))
	{
		int equals_Position = line.find('=');
		english = line.substr(0, equals_Position - 1);
		esperanto = line.substr(equals_Position + 2, line.length() - equals_Position-1);
		enToEO.Insert(english, esperanto);
	}

	input.close();
}


void WordLookup()
{

}


int main()
{
	LoadDictionary();
}
