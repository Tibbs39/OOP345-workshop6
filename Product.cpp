// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#include "Product.h"
#include <iomanip>

namespace w6 {
    // constructor
    Product::Product(int num, double price) {
        this->price = price;
        this->prodCode = num;
    }

    double Product::getPrice() const {
        return price;
    }

    void Product::display(std::ostream& os) const {
        os << std::setw(16) << price << std::setw(16) << getPrice();
    }
}