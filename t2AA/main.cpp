#include <iostream>
#include <iomanip>
#include "Vec3.h"
#include "tests.h"
using namespace std;

int main()
{
	std::cout << std::setprecision(16);
	cout << "---- TESTES ----" << endl;
	tvecsum();
	tvecsub();
	tvectimesscalar();
	tvecbyscalar();
	tvecdot();
	tveccross();
	tvecmag();
	tvecdist();
	tvecnormalize();
	tvecangle();
	tvecprojection();
	cout << endl;
	
	cout << "---- CALCULOS ----" << endl;
	Vec3 vec  = Vec3(1, -2, 3);
	Vec3 vec2 = Vec3(4, 9, -2);

	cout << "vec1 = " << vec << endl;
	cout << "vec2 = " << vec2 << endl;
	cout << endl;
	cout << "vec1 + vec2 = " << vec + vec2 << endl;
	cout << "vec1 * 2 = " << vec * 2 << endl;
	cout << "vec1 / 2 = " << vec / 2 << endl;
	cout << endl;
	cout << "vec1.dot(vec2) = " << vec.dot(vec2) << endl;
	cout << "vec1.cross(vec2) = " << vec.cross(vec2) << endl;
	cout << endl;
	cout << "vec1 magnitude = " << vec.mag() << endl;
	cout << "vec1 normalizado = " << vec.normalize() << endl;
	cout << "distancia entre vec1 e vec2 = " << vec.distance(vec2) << endl;
	cout << endl;
	cout << "angulo entre vec1 e vec2 = " << vec.angle(vec2) << endl;
	cout << "projecao de vec1 sobre vec2 = " << vec.vectorProjection(vec2) << endl;
	cout << endl;

	return 0;
}
