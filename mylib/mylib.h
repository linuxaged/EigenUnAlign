#include "defines.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <cassert>
#include <functional>
#include <Eigen/Dense>
#include <vector>
#include <map>

using Vec3 = Eigen::Vector3d;
using Vec4 = Eigen::Vector4d;
using Mat3 = Eigen::Matrix<double, 3, 3, Eigen::RowMajor>;
using Mat4 = Eigen::Matrix<double, 4, 4, Eigen::RowMajor>;

class Entity{};
class Mesh{};
class Jaw{};
class Tooth{};
class Gum{};
class ToothList{};
class Attachment{};

struct BBox {
	Vec3 min;
	Vec3 max;
};

struct Rect {
	int x, y;
	int width, height;
};

class CepMeasure {
private:
	std::vector<int> m_measurePnts;
	std::vector<int> m_measureData;

	int m_nBrightPos;
	int m_nContrastPos;
	Rect m_range;

	bool m_bDataChanged;
};

class PanMeasure {
	std::vector<int> m_datas;
	int m_nContrast;
	int m_nBrightness;
};

class DLL_PUBLIC MyLib
{
public:
	MyLib();
	~MyLib();
private:
	Mat4 m_planeMatrix;
	std::vector<Mesh*> m_meshes;
	std::vector<Jaw*> m_jaws;
	std::vector<Tooth*> m_teeth;
	std::vector<Gum*> m_gums;
	std::vector<ToothList*> m_toothLists;
	std::vector<Attachment*> m_attachments;
	std::map<int, Entity*> m_mapEntity;
	BBox m_bbox;
	CepMeasure m_cepMeasure;
	PanMeasure m_panMeasure;
	bool m_needUpload{};
};