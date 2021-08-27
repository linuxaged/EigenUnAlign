#include "mylib/defines.h"
#include "mylib/mylib.h"

int main(int argc, char const *argv[])
{
	MyLib* p = new MyLib;
	delete p;
	return 0;
}