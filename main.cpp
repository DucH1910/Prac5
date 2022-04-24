#include <iostream>
#include "FilterForTwoDigitPositive.h"
#include <vector>
using namespace std;
int main(){
    vector<int> num{-1,4,9,15,20};
    vector<int> result;
    FilterForTwoDigitPositive filter;
    result = filter.filter(num);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}