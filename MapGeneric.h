#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
class MapGeneric{
    private:
        virtual int f(int);
    public:
        std::vector<int> map(std::vector<int>);
};
#endif