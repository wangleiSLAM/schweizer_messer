// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_03_14_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 3, 14 > >::register_converter();
}
