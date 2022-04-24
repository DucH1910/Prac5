#include "MapAbsoluteValue.h"
using namespace std;
int MapAbsoluteValue::f(int a){
    if (a>=0)
        return a;
    else
        return a*(-1);
}