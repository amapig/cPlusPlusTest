#include <iostream>
using namespace std;

#include "Operator.h"

int main() {
    Operator obj1, obj2;
    obj1.setAccount(1);
    obj2.setAccount(2);

    Operator obj3 = operator+(obj1, obj2);

    cout << obj3.getAccount() << endl;

    return 1;
}
