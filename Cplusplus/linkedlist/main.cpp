#include <iostream>
#include "list.h"

using namespace std;

int main(int argc, char const *argv[])
{
	list l1;
	l1.insert(10);
	l1.insert(20);

	l1.print();
	return 0;
}