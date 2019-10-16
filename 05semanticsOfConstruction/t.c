struct plain{
	int val;
	int (*f)(int);
};

int ff(int a)
{
	return a;
}
int main(){
	plain p;
	p.val = 3;
	p.f = ff;
	(p.f)(p.val);
}
