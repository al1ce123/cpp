#include <iostream>
#include <string>

template <typename T>
class MutantStack : std::stack<T> {
public:
    // Constructor
    MutanStack();
    MutanStack(MutanStack& src);
    virtual ~MutanStack();
    MutanStack& operator=(MutanStack& rhs);

    // Member function
    T* begin() const;
    T* end() const;

    // Operator overload
    T& operator++(void);
    T& operator--(void);
    T operator++(int);
    T operator--(int);
    T operator*() const;

private:
    T* _myStack;
    T* it;
};