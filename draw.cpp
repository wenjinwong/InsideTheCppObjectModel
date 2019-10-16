struct C_point{}; 
struct Point : public C_point{
	public:
		operator C_point() { return _c_point;}
	private:
		C_point _c_point;
};

void draw_line(Point, Point)
{
	;
}
