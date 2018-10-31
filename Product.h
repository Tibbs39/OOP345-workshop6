// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef W6_PRODUCT_H
#define W6_PRODUCT_H
#include "iProduct.h"
#include <iostream>

namespace w6 {
    class Product : public iProduct {
        double price;
        int prodCode;

        public:
            // constructor
            Product(int, double);
            // return price
            double getPrice() const;
            // display
            void display(std::ostream&) const;
    };
}

#endif //W6_PRODUCT_H