///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Shape.h"

class Rectangle: public Shape{
protected:
    double length;
    double width;
public:
    Rectangle(double newLength, double newWidth);

public:
    double getWidth() const noexcept;
    double getLength() const noexcept;
public:
    double compute_area() const noexcept override;

};

