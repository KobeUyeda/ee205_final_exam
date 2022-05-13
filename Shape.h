///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Shape.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

class Shape {
public:
    virtual double compute_area() const noexcept =0;
};

