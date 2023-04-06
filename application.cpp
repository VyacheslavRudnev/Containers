#include <iostream>
#include "doubly_linked_list.h"
using namespace std;

int main()
{
	doubly_linked_list<string> list;
	list.push_back("London");
	list.push_back("Paris");
	list.push_back("New York");
	list.push_back("Tokyo");
	list.push_back("Berlin");
	list.push_back("Rome");
	list.push_back("Madrid");
	list.push_front("Cities: ");
	list.print();
	
	return 0;
}