// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_07_09_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 7, 9 > >::register_converter();
}
