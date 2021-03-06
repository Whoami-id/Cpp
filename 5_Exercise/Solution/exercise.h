#pragma once

#include <vector>

typedef unsigned char uchar;
typedef std::vector<unsigned char> ByteArray;


uchar hex_xor(uchar &hex1, uchar &hex2);


ByteArray hex_vector_xor(ByteArray &vec1, ByteArray &vec2);
