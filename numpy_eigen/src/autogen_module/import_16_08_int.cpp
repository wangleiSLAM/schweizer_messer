// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_16_08_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 16, 8 > >::register_converter();
}
