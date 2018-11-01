#ifndef __COFFEE_H_
#define __COFFEE_H_
#include<vector>
using namespace std;
class Coffee {
	string name;
	string espresso;
	string syrup;
	string liquid;//water . milk
	//vector<string>topping;
	//vector<string>mix;
public:
	Coffee(string name);
	void print_order();
};
#endif
