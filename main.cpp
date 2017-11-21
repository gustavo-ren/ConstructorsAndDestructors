#include <iostream>
#include "HAL.h"
using namespace std;

int main()
{
     HAL h;
     h.doIt();
     h.calculus(2.0, 10000.0);
     cout << "End of transmition" << endl;
}
