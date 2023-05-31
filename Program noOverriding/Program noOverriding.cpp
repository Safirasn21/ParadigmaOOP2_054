#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() final {
		cout << "Halo saya function dari base class";
	}
};

class derivedClass:public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya function dari derived class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}
