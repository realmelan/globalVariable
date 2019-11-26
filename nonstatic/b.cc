#include "b.h"
#include <vector>

std::vector<int> cnt;
std::vector<int>& incb() {
    cnt.push_back(1);
    return cnt;
}

