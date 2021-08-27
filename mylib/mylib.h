#include "defines.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <cassert>
#include <functional>
#include <Eigen/Dense>

using Vec3 = Eigen::Vector3d;
using Vec4 = Eigen::Vector4d;
using Mat3 = Eigen::Matrix<double, 3, 3, Eigen::RowMajor>;
using Mat4 = Eigen::Matrix<double, 4, 4, Eigen::RowMajor>;

class DLL_PUBLIC MyLib
{
public:
	MyLib();
	~MyLib();
private:
	Mat4 _mat;
};