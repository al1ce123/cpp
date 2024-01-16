#include "Serializer.hpp"
#include "Data.hpp"

int main() {

    Data data;

    // Data* ptr = Serializer::deserialize(Serializer::serialize(&data));
    // std::cout << "original pointer:           " << &data << '\n';
    // std::cout << "deserialize's return value: " << ptr << '\n';

    // uintptr_t test = 99;

    // std::cout << Serializer::deserialize(test) << '\n';
    std::cout << Serializer::serialize(&data) << '\n';





    return 0;
}