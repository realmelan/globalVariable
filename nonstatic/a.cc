#include "a.h"
#include <vector>

std::vector<int> cnt;
std::vector<int>& inca() {
    cnt.push_back(1);
    return cnt;
}
