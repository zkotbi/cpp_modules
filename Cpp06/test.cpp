// class p {};
// class ch1 : public p {};
// class ch2 : public p {};

// class u {};

// int main()
// {
// 	p h;
// 	ch1 x;
// 	ch2 y;
// 	u z;

// }
// C++ program to demonstrate
// static_cast in case of
// private inheritance
#include <iostream>
#include <sstream>
#include <string>
// using namespace std;

// class Base {};

// class Derived : public Base {
//   // Inherited private/protected
//   // not public
// };

// // Driver code
// int main() {
//   Derived d1;

//   // Implicit type cast allowed
//   Base *b1 = (Base *)(&d1);

//   // static_cast not allowed
//   Base *b2 = static_cast<Base *>(&d1);
//   return 0;
// }

class a {
	public:
		a() {std::cout << "hello AAAAAAAAAAAAAAAAA" << std::endl;}
		void funcA() {std::cout << "class \'A\'" << std::endl;}
};
class b {
	public:
		b() {std::cout << "hello BBBBBBBBBBBBBBBBBB" << std::endl;}
		void funcB() {std::cout << "class \'B\'" << std::endl;}
};

int main()
{
	a *A = new a();
	b *B = reinterpret_cast<b *>(A);

	B->funcB();

	// std::cout <<  static_cast<char>(-90) << std::endl;
	// double d;
	// std::stringstream ss(".2.2...1");
	// ss >> d;
	// std::cout << "------> " << (d) << std::endl;
	// std::cout <<  static_cast<double>(1.7976931348623157e+308 * 10) << std::endl;
}
