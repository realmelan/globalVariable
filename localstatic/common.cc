#include "common.h"
#include <vector>

static std::vector<int> cnt;

std::vector<int>& inc() {
    cnt.push_back(1);
    return cnt;
}
