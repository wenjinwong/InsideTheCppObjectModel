#include<iostream>
#include<ctime>

int main()
{
	time_t begin, end;
	begin = clock();
	int a = 1, b = 2;
	for(auto i = 1; i < 1000000000; i++)
	{
		int tmp = a;
		a = b;
		a += 1;
		a -= 1;
		b = tmp;
	}

	end = clock();
	std::cout << std::left << (end - begin) / CLOCKS_PER_SEC << std::endl;
}
		
