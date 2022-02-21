#pragma once

#include <vector>

typedef std::vector<bool> BinaryArray;


std::vector<bool> shuffle_till_equal(const BinaryArray &target, BinaryArray input);


std::vector<bool> smart_shuffle_till_equal(const BinaryArray &target, BinaryArray input);
