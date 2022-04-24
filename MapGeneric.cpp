#include "MapGeneric.h"
#include <vector>
using namespace std;
int MapGeneric::f(int a){
    return a;
}
vector<int> MapGeneric::map(vector<int> iv){
    if (iv.size()==1){
        iv[0]=f(iv[0]);
        return iv;
    }
    else{
        vector<int> iv1(iv.begin(),iv.begin()+1);
        vector<int> iv2(iv.begin()+1,iv.end());
        iv1=map(iv1);
        iv2=map(iv2);
        iv1.insert( iv1.end(),iv2.begin(),iv2.end());
        return iv1;
    }
}
