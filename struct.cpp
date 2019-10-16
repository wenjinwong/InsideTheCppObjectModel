#include<iostream>
struct vir{
	int val;
	private:
	int pri;
};
//class vir{};
struct vir1 : public vir{
	int i;
}
;
class tet: vir{
	double o;
};

template<struct T>
int f(T t)
{
	std::cout << t << std::endl;
	return 1;
}
int main()
{
	static int foo;
	extern int foo;
}
