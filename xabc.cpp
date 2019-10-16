class x{public: int i;};
class a: public virtual x {public: int j; };
class b: public virtual x {public: double d;};
class c : public a, public b {public: int k; };

void foo( a* pa) { pa->i = 1034;}

int main() 
{
	foo(new a);
	foo(new c);
}
