#include "name_of.h"

#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    
    for (unsigned long int i = 0; i < 1000000000; i = i * 1.3 + 1) {
        cout << i << ": " << name_of(i) << endl;
    }
}
