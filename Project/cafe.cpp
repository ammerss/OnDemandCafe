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
	//Ingredient(string n, int p) :name(n), price(p) {};

	string  getname() {
		return name;
	}
	void setprice(int n) {
		price = n;
	}
	int getprice() {
		return price;
	}
	
};
class Inventory {
	list<Ingredient> i;
	list<Ingredient>::iterator it;
public:
	void add_i(Ingredient c) {
		i.push_back(c);
	}
	Ingredient search(string a) {
		for (it = i.begin(); it != i.end(); ++it) {
			Ingredient temp = *it;
			if (temp.getname() == a)
				return temp;
		}
	}
};
class Coffee {
	string name;
	vector<pair<Ingredient, int>> content; //��ü��
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
		for (int i = 0; i <  topping.size(); i++) {
			cout << topping[i].getname() << " ";
		}
	}
	int getprice() {
		Ingredient temp;
		Inventory *stock;
		int sum = 0;
		for (int i = 0; i < content.size(); i++) {
			cout << content[i].first.getname() << content[i].second << " ";
			//temp = temp->search(content[i].first.getname()).getprice;
			temp = stock->search(content[i].first.getname());
			sum += temp.getprice();
		}
		return sum;
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

			cout << "0.나가기 1.커피 주문하기"<< endl;
			cin >> exit;
			if (exit) {
				cout << "주문할 커피 : " << endl;
				cin.getline(order, 1000000);

			}
			cout << "0.주문완료 1.추가" << endl;
			cin >> add;
			if (add) {
				add_content
			}
			cout << "커피 주문 :" << endl;
			cin.getline(order, 1000000);
			Coffee 
			cout << "추가 : " << endl;
			
			cout << "이름 만들기 :" << endl;

			

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