#include "FilterGeneric.h"
#include <vector>
using namespace std;
bool FilterGeneric::g(int a){
    return true;
}
vector<int> FilterGeneric::filter(vector<int> iv){
    if (iv.size()==1){
        if (g(iv[0]))
            return iv;
        else {
            vector<int> empty;
            return empty;
        }
    }
    else{
        vector<int> iv1(iv.begin(),iv.begin()+1);
        vector<int> iv2(iv.begin()+1,iv.end());
        iv1=filter(iv1);
        iv2=filter(iv2);
        iv1.insert( iv1.end(),iv2.begin(),iv2.end());
        return iv1;
    }
}
