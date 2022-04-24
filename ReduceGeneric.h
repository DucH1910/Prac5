#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>
class ReduceGeneric{
    private:
        virtual int binaryOperator(int,int);
    public:
        int reduce(std::vector<int>);
};
#endif