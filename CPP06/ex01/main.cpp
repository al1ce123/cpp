#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data data;

    Data* ptr = Serializer::deserialize(Serializer::serialize(&data));
    std::cout << "original pointer:           " << &data << '\n';
    std::cout << "deserialize's return value: " << ptr << '\n';

    return 0;
}