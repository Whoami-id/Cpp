#pragma once

#include <map>
#include <string>
#include <utility>


typedef std::map<std::string, std::pair<int, int>> Friends;


std::string get_oldest_friend(const Friends &friends);

std::string get_heaviest_friend(const Friends &friends);
