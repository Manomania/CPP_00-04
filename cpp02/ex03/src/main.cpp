#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(4, 0);
	Point c(2, 3);
	Point inside(2, 1);
	Point outside(-2, 1);
	Point onEdge(2, 3);
	Point onVertex(3, 0);
	Point close(1.9, 0.1);

	std::cout << "\nTests:" << std::endl;
	std::cout << "inside: " << bsp(a, b, c, inside) << std::endl;
	std::cout << "outside: " << bsp(a, b, c, outside) << std::endl;
	std::cout << "onEdge: " << bsp(a, b, c, onEdge) << std::endl;
	std::cout << "onVertex: " << bsp(a, b, c, onVertex) << std::endl;
	std::cout << "close: " << bsp(a, b, c, close) << std::endl;
	return 0;
}
