// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

// This file was provided to me by my professor.

// iProduct.h
#ifndef W6_IPRODUCT_H
#define W6_IPRODUCT_H
#include <fstream>

namespace w6
{
    class iProduct
    {
    public:
        virtual double getPrice() const = 0;
        virtual void display(std::ostream&) const = 0;
    };
}
#endif