#!/bin/sh

class_name=$1
directory_name=$2

cpp_name=${class_name}.cc
h_name=${class_name}.h

echo -e $(mkdir ${directory_name})

echo -e \#ifndef ${class_name}_H'\n'\#define ${class_name}_H'\n\n'class ${class_name}"{\n\n};\n\n"\#endif >> ${directory_name}/${h_name}
echo -e \#ifndef ${class_name}_CPP'\n'\#define ${class_name}_CPP'\n\n'#include "<"${h_name}">\n\n"\#endif >> ${directory_name}/${cpp_name}
