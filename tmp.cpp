#include<iostream>
#include<stdio.h>
#include<memory.h>
class Point3D{
	public:
		Point3D(float x, float y, float z) : _x(x), _y(y), _z(z) {}
		Point3D operator+(const Point3D& rhs)
		{
			this->_x += rhs._x;
			this->_y += rhs._y;
			this->_z += rhs._z;
			return *this;
		}
		Point3D(const Point3D& rhs)
		{
			memcpy(this, &rhs, sizeof(Point3D));
		}
	private:
		float _x, _y, _z;
};

int main()
{
	;
}
