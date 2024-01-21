#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	// Base* test;

	// test = generate();
	// identify(test);
	// identify(*test);

	// delete test;

	A child;
	Base* mother = &child;

	A* child2 = dynamic_cast<A*>(mother);
	if (child2 == NULL) {
		std::cout << "Error" << '\n';
	} else {
		std::cout << "OK" << '\n';
	}

	return 0;
}
