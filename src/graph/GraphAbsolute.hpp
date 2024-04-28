#pragma once

#include "../types.hpp"
#include <iterator>
#include <list>

#define AXIS_DENSITY 30

typedef std::list<AbsolutePoint> PointsContainer;


class GraphAbsolute {

public:
    static int axis_density;

    template<std::output_iterator<AbsolutePoint> OutputIt>
    void readGraph(OutputIt begin){
        std::copy(this->graphPoints.begin(), this->graphPoints.end(), begin);
    }

    void test();


private:
    PointsContainer graphPoints {1,2,3,4,5,6,7,8};

};  