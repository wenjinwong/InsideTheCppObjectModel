struct C_point{};
class Point : public C_point{};

extern void draw_line(Point, Point);
extern void draw_rect(C_point, C_point);

int main()
{
	draw_line(Point(), Point());
	draw_rect(Point(), Point());
}
