#include "ReduceGeneric.h"
#include <vector>
using namespace std;
int ReduceGeneric::binaryOperator(int a,int b){
    return 0;
}
int ReduceGeneric::reduce(vector<int> iv){
    if (iv.size()==2){
        return binaryOperator(iv[0],iv[1]);
    }
    else{
        vector<int> iv1(iv.begin(),iv.begin()+2);
        int i1=reduce(iv1);
        vector<int> iv2(iv.begin()+2,iv.end());
        iv2.insert(iv2.begin(),i1);
        return reduce(iv2);
    }
}
