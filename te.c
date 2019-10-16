#include<string.h>
#include<stdlib.h>

struct mumble{
	char pc[1];
};

int main()
{
	char* string = "12345";
	struct mumble *pm = (struct mumble*)malloc(sizeof(struct mumble) + strlen(string) +  1);
	strcpy(&pm->pc, string);
	printf("%s", pm->pc);
}

