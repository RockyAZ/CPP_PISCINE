#include <iostream>

int main()
{
	srand(time(NULL));
    for (int i = 0; i < 30; i++)
        std::cout << std::rand() % 2 << std::endl;
}