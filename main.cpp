#include <iostream>

//#include "tester/tester.h"
#include "matrix.h"

int main()
{
	//Tester::execute();
	Matrix<int> m(3, 3);
	m.set(0, 0, 1);
	m.set(0, 1, 2);
	m.set(0, 2, 3);
	m.set(1, 0, 4);
	m.set(1, 1, 5);
	m.set(1, 2, 6);
	m.set(2, 0, 7);
	m.set(2, 1, 8);
	m.set(2, 2, 9);

	m.set(0, 1, -2);
	m.print();
    return EXIT_SUCCESS;
}

