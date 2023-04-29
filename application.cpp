//#include "single_link_list.h"
//#include "stack_2.h"
#include "queue_2.h"
using namespace std;

int main() {
	/*cout << "QUEUE" << endl;
	queue<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.print();
	cout << "______________" << endl << endl;
	list.pop_front();
	list.print();
	cout << "______________" << endl << endl;
	list.push_back(5);
	list.pop_front();
	list.print();
	cout << "______________" << endl << endl;

	cout << "STACK" << endl;
	stack<int> list_2;
	list_2.push_back(1);
	list_2.push_back(2);
	list_2.push_back(3);
	list_2.push_back(4);
	list_2.push_back(5);
	list_2.push_back(6);
	list_2.print();
	cout << "______________" << endl << endl;
	list_2.pop_back();
	list_2.print();
	cout << "______________" << endl << endl;
	list_2.pop_back();
	list_2.print();*/
	
	cout << "QUEUE_2" << endl << endl;
	
	queue_2<int> q;
	q.push_back(1);
	q.push_back(2);
	q.push_back(3);
	q.push_back(4);
	q.push_back(5);
	
	q.print();

	q.copy_q();
	q.print();

	return 0;
}