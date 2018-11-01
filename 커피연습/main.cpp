#include <iostream>
#include <string>
#include <vector>
#include "Coffee.h"
using namespace std;



int main() {
	char order[1000000];

	cin.getline(order, 1000000);

	Coffee cup(order);

	cup.print_order();

	//cout << order << endl;



	system("pause");
	return 0;
}