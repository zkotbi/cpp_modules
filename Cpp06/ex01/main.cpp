#include "Data.hpp"
#include "Serializer.hpp"
#include <cstdint>
#include <ios>
#include <iostream>

int main()
{
	Data data = {25, '*', true, 1000000000000000000l};

	std::cout << "address: "<< &data << std::endl;
	std::cout << "char: "<< data.c << "\nnum: " << data.num << "\nbool: "<< data.b << "\nlong: "<< data.l<< std::endl;
	uintptr_t ptr = Serializer::serialize(&data);
	std::cout << "address: "<< ptr << std::endl;
	Data *data1 = Serializer::deserialize(ptr);
	std::cout << "address: "<< data1 << std::endl;
	std::cout << "char: "<< data1->c << "\nnum:` " << data1->num << "\nbool: "<< data1->b << "\nlong: "<< data1->l<< std::endl;
	Data data2 = *Serializer::deserialize(ptr);
	std::cout << "address: "<< &data2 << std::endl;
	std::cout << "char: "<< data2.c << "\nnum:` " << data2.num << "\nbool: "<< data2.b << "\nlong: "<< data2.l<< std::endl;
}
