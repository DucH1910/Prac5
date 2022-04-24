#include "ReduceGCD.h"
using namespace std;
int ReduceGCD::binaryOperator(int a,int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}