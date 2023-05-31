#include <iostream>
using namespace std;

class baseclass final {
public:
	virtual void perkenalan() final {
		cout << "Halo saya function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Halo saya function dari derived class";
	}
};

