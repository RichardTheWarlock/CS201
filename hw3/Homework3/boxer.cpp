#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

string wor;
string num;

int width;

void InputWord()
{
	string word;
	cout << "Please enter a word:";
	std::getline(cin, word);
	wor = word;
}

void InputNumber()
{
	cout << "Please enter a number:";
	cin >> width;

}


void PrintBox4()
{
	for (int column = 0; column < width; ++column)
	{
		for (int row = 0; row < wor.size() + 2 + width * 2; ++row)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void PrintBox5()
{
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	for (int row = 0; row < wor.size() + 2; ++row)
	{
		cout << " ";
	}
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	//
	cout << "\n";
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	cout << " " << wor << " ";
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	//
	cout << "\n";
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	for (int row = 0; row < wor.size() + 2; ++row)
	{
		cout << " ";
	}
	for (int row = 0; row < width; ++row)
	{
		cout << "*";
	}
	cout << "\n";
	//
}