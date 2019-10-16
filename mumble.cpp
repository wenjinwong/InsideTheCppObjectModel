#include<iostream>
#include<cstring>
//#include<string>
using namespace std;

struct mumble {
	char pc[1];
};

int main()
{
	char* string= "string";
	struct mumble *pm = (struct mumble*)malloc(sizeof(struct mumble) + strlen(string) + 1);
	strcpy(&(pm->pc), string);
}
