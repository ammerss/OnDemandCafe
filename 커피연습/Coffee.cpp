#include <iostream>
#include "Coffee.h"
#include<string>
using namespace std;

Coffee::Coffee(string name) :name(name) {

}

void Coffee::print_order() {
	cout << "name: " << name << endl;
}