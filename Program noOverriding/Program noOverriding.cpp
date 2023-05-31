#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() final {
		cout << "Halo saya function dari base class";
	}
};
