#include "a.h"
#include "b.h"
#include <iostream>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& os, std::vector<int>& v) {
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i] << ",";
    }
    os << "]";
    return os;
}
int main() {
    cout << inca() << endl;
    cout << incb() << endl;
    return 0;
}

