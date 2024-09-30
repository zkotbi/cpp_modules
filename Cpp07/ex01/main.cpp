#include "iter.hpp"
#include <cstddef>
#include <ios>
#include <sstream>

// void add2(int &num)
// {
// 	num += 2;
// }

// void toUppStr(std::string &str)
// {
// 	for (size_t i = 0; i < str.size(); i++) {
// 		str[i] = std::toupper(str[i]);
// 	}
// }

// int main()
// {
// 	int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	iter(i, 10, add2);
// 	for (int j = 0; j < 10; j++) {
// 		std::cout << i[j] << std::endl;
// 	}
// 	std::cout << std::endl;
// 	std::string strArray[] = {"Zaid", "Kotbi", "."};
// 	iter(strArray, 3, toUppStr);
// 	for (int j = 0; j < 3; j++) {
// 		std::cout << strArray[j] << std::endl;
// 	}
// 	}
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
