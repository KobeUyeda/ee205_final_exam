///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(double newLength, double newWidth) {
    if (newLength <=0 || newWidth <= 0){
        throw std::invalid_argument("length and width must > 0");
    }
    Rectangle::length = newLength;
    Rectangle::width = newWidth;
}

double Rectangle::getLength() const noexcept {
    return (Rectangle::length);
}
double Rectangle::getWidth() const noexcept {
    return (Rectangle::width);
}

double Rectangle::compute_area() const noexcept {
    return (getWidth() * getLength());
}