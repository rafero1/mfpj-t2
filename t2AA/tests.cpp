#include <iostream>
#include <assert.h>
#include "Vec3.h"
#include "tests.h"
#include "util.h"

using namespace std;



int tvecsum()
{
	Vec3 v = Vec3(1, 2, 3);
	Vec3 u = Vec3(1, 4, 1);
	Vec3 expected = Vec3(2, 6, 4);
	assert(v + u == expected);
	cout << "soma: functional" << endl;
	return 0;
}

int tvecsub()
{
	Vec3 v = Vec3(1, 5, -2);
	Vec3 u = Vec3(1, 6, 1);
	Vec3 expected = Vec3(0, -1, -3);
	assert(v - u == expected);
	cout << "subtracao: functional" << endl;
	return 0;
}

int tvectimesscalar()
{
	Vec3 v = Vec3(0, -1, 3);
	int n = 3;
	Vec3 expected = Vec3(0, -3, 9);
	assert(v * n == expected);
	cout << "* por escalar: functional" << endl;
	return 0;
}

int tvecbyscalar()
{
	Vec3 v = Vec3(2, 5, -10);
	int n = 2;
	Vec3 expected = Vec3(1, 2.5, -5);
	assert(v / n == expected);
	cout << "/ por escalar: functional" << endl;
	return 0;
}

int tvecdot()
{
	Vec3 v = Vec3(5, 5, -3);
	Vec3 u = Vec3(5, 5, 5);
	int expected = 35;
	assert(v.dot(u) == expected);
	cout << "produto escalar: functional" << endl;
	return 0;
}

int tveccross()
{
	Vec3 v = Vec3(2, -5, 1);
	Vec3 u = Vec3(0, 3, 1);
	Vec3 expected = Vec3(-8, -2, 6);
	assert(v.cross(u) == expected);
	cout << "produto vetorial: functional" << endl;
	return 0;
}

int tvecmag()
{
	Vec3 v = Vec3(1, 2, 3);
	double expected = 3.7416573867739413;
	assert(comp(v.mag(), expected));
	cout << "magnitude: functional" << endl;
	return 0;
}

int tvecdist()
{
	Vec3 v = Vec3(1, -2, 3);
	Vec3 u = Vec3(4, 9, -2);
	double expected = 12.4499;
	assert(comp(v.distance(u), expected));
	cout << "distance: functional" << endl;
	return 0;
}

int tvecnormalize()
{
	Vec3 v = Vec3(1, -2, 3);
	Vec3 expected = Vec3(0.267261, -0.534522, 0.801784);
	assert(v.normalize() == expected);
	cout << "normalize: functional" << endl;
	return 0;
}

int tvecangle()
{
	Vec3 v = Vec3(1, -2, 3);
	Vec3 u = Vec3(4, 9, -2);
	double expected = 2.1316;
	assert(comp(v.angle(u), expected));
	cout << "angle: functional" << endl;
	return 0;
}

int tvecprojection()
{
	Vec3 v = Vec3(1, 2, 3);
	Vec3 u = Vec3(3, 4, 2);
	Vec3 expected = Vec3(1.75862068, 2.34482758, 1.17241379);
	assert(v.vectorProjection(u) == expected);
	cout << "projection: functional" << endl;
	return 0;
}
