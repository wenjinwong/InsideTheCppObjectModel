#include<iostream>
#include<string>

class zooanimal {
	public:
	//	zooanimal() {};
	//	virtual ~zooanimal() {};
		virtual void rotate() {};
	protected:
		int loca;
		std::string name;
};

class bear : public zooanimal {
	public:
		bear() {};
		~bear() {};
		void ratate() {};
		virtual void dance() {};
	protected:
		enum Dance{};
		Dance dance_known;
		int cell_block;
};

int main()
{
	std::cout << sizeof(std::string) <<"   "<< sizeof(int) << std::endl;
	zooanimal z;int a;
	std::cout << sizeof(zooanimal) << std::endl;
	std::cout << sizeof(z) << &z << " " << &a;
	
	
}
