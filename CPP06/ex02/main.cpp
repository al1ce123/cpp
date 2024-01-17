#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {
	Base *test1;

	test1 = generate();
	identify(test1);
	identify(*test1);

	delete test1;

	return 0;
}
