#pragma once

#include <vector>


using Matrix = std::vector<std::vector<double>>;


std::vector<double> max_row_values(Matrix &matrix);


double sort_and_max(std::vector<double> &vec);
