// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

// This file was provided to me by my professor.

// ProdUtil.h
#ifndef W6_PRODUTIL_H
#define W6_PRODUTIL_H

#include <iostream>
#include <fstream>
#include "iProduct.h"

namespace w6
{
    std::ostream& operator<<(std::ostream&, const iProduct&);
    iProduct* readProduct(std::ifstream&);
}
#endif