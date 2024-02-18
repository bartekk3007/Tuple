#include <iostream>
#include <tuple>
#include <variant>

int main()
{
	std::tuple<char, int> t1;
	t1 = std::make_tuple('a', 2);

	int t = std::get<int>(t1);

	std::cout << t << '\n';

	return 0;
}