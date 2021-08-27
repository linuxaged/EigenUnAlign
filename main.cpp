#include "mylib/defines.h"
#include "mylib/mylib.h"
#include <afx.h>

class Dlg {
public:
	DECLARE_DYNCREATE(Dlg)
private:
	MyLib lib;
};

int main(int argc, char const *argv[])
{
	Dlg dlg;
	return 0;
}