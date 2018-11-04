#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <utility>
using namespace std;



class Ingredient {
	string name;
	int price;
public:
	Ingredient() {}
	Ingredient(string n) :name(n) {
		price = 0;
	}
	string  getname() {
		return name;
	}
	
};
class Coffee {
	string name;
	vector<pair<Ingredient, int>> content;
	vector<Ingredient>topping;
public:
	Coffee() {}
	Coffee(string n) :name(n) {
	}
	void add_content(Ingredient object, int ratio) {
		content.push_back(make_pair(object, ratio));
	}
	void print_coffee() {
		cout << name << ":";
		for (int i = 0; i < content.size(); i++) {
			cout << content[i].first.getname() << content[i].second << " ";
		}
		for (int i = 0; i < topping.size(); i++) {
			cout << topping[i].getname() << " ";
		}
	}
	int getprice() {

	}
};

class Inventory {
	list<Ingredient> i;

public:
	void add_i(Ingredient c) {
		i.push_back(c);
	}
};
class Syrup :public Ingredient{

};
class Bean :public Ingredient {
	string origin;
};
class Topping :public Ingredient {

};

class Menu {
	list<Coffee> l;
	list<Coffee>::iterator it;

public:
	void add_menu(Coffee i) {
		l.push_back(i);
	}
	void print_menu()  {
		for (it = l.begin(); it != l.end(); ++it) {
			Coffee temp = *it;
			temp.print_coffee();
		}
	}
};
/*
class Guest  {
public:
	void order() {
		int exit = 0;
		int add = 0;
		char order[1000000];

		cin.getline(order, 1000000);

		Coffee cup(order);


		while (exit) {

			cout << "0.������ 1.Ŀ�� �ֹ��ϱ�"<< endl;
			cin >> exit;
			if (exit) {
				cout << "�ֹ��� Ŀ�� : " << endl;
				cin.getline(order, 1000000);

			}
			cout << "0.�ֹ��Ϸ� 1.�߰�" << endl;
			cin >> add;
			if (add) {
				add_content
			}
			cout << "Ŀ�� �ֹ�:" << endl;
			cin.getline(order, 1000000);
			Coffee 
			cout << "�߰� : " << endl;
			
			cout << "�̸� ����� :" << endl;

			

		}
		cup.print_order();
	}
	void print_order() {

	}
};*/
int main() {

	Coffee c("americano");
	Ingredient ing("water");
	c.add_content(ing, 90);
	Menu menu;
	menu.add_menu(c);
	
	menu.print_menu();

	system("pause");
	return 0;
}