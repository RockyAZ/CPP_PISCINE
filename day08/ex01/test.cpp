#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	v.reserve(3);

	std::cout << v.capacity() << std::endl;
	// v.push_back(1);
	std::cout << v.capacity() << std::endl;
	v.push_back(28);
	v.push_back(322);
	v.push_back(1488);

	std::cout << "VECTOR:: " << v[0] << std::endl;
	std::cout << "VECTOR:: " << v[1] << std::endl;
	std::cout << "VECTOR:: " << v[2] << std::endl;

	std::cout << "SIZE:: " << v.size() << std::endl;
	std::cout << "CAPA:: " << v.capacity() << std::endl;

	v.push_back(2);

	std::cout << "SIZE:: " << v.size() << std::endl;
	std::cout << "CAPA:: " << v.capacity() << std::endl;
}
