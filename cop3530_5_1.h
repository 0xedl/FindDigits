#include <iostream>
#include <string>
#include <algorithm>
#include <map>

std::string findTheDigits(std::string x, std::string y) {

    std::map<char, int> result;

	for (int i = 0; i < 10; i++)
		result.emplace(i, 0);

	for (char dig : x)
		result[dig] -= 1;

	for (char dig : y)
			result[dig] += 1;

	std::string str = "";
	std::map<char, int>::iterator itr;
	for( itr = result.begin(); itr != result.end(); ++itr){
		int x = itr->second;
		while (x > 0)
		{
			str+= itr->first;
			x--;
		}
	}
	return str;
}
