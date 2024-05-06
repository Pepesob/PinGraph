#pragma once

#include "../types.hpp"
#include <iterator>
#include <vector>


class GraphValues2D {

public:

    template<std::output_iterator<Point2D> OutputIterator>
    void getPoints(OutputIterator out) {std::copy(this->graphPoints.begin(), this->graphPoints.end(), out);}

    template<std::input_iterator InputIterator>
    void setPoints(InputIterator begin, InputIterator end) {
        this->graphPoints.clear();
        std::copy(begin, end, std::back_inserter(graphPoints));
    }

    size_t getLength();


private:
    std::vector<Point2D> graphPoints;

};  