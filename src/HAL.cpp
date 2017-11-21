#include "HAL.h"
#include <iostream>
#include <math.h>

using namespace std;

HAL ::HAL(){
    cout << "Hello gentleman, I am a HAL 9000 computer unity" << endl;
}
HAL :: ~HAL(){
    cout << "I\'m afraid Dave, my mind is going, I can fell it." << endl;
}
void HAL::doIt(){
    cout << "I am sorry Dave, I\'m afraid I can\'t do that" << endl;
}

void HAL::calculus(double b, double exp){
    cout << pow(b, exp) << endl;
}
