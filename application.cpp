#include <iostream>
#include "single_link_list.h"
using namespace std;

int main()
{
	single_linked_list<string> list;
	list.push_back("London");
	list.push_back("Paris");
	list.push_back("New York");
	list.push_back("Tokyo");
	list.push_back("Moscow");
	list.push_back("Berlin");
	list.push_back("Rome");
	list.push_back("Madrid");
	list.dev_print();
	list.insert(3,"Kiev");
	list.dev_print();
	return 0;
}