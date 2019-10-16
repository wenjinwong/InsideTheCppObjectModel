#include<iostream>
#include<string>

std::string cat(std::string& lhs, std::string& rhs)
{
	std::string result;
	result = lhs + rhs;
	return result;
}

void catopt(std::string& result, std::string& lhs, std::string& rhs)
{
	result = lhs + rhs;
	return ;
}

int main()
{

	std::string a("a");
	std::string b("b");
	std::string result;
	std::cout << result << std::endl;
	catopt(result, a, b);
	std::cout << result << std::endl;
	std::cout << cat(a, b) << std::endl;
	;
}
