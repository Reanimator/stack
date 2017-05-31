#include "stack.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	try
	{
    	Tstack <std::string> temp(10);
	
	temp.push(std::string("newtest"));
	temp.push(std::string("newtest1"));
	temp.push(std::string("newTest2"));
	temp.push(std::string("newtest100500"));
	cout << temp.pop() << " ";
	cout << temp.pop() << " ";
	cout << temp.pop() << " ";
	cout << temp.pop();
	temp.resize(2);
	}
	catch (int& e)
	{
		cout << "error number:" << e << endl;
	}
	cin.get();
	return 0;
}