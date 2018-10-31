// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef W6_TAXABLEPRODUCT_H
#define W6_TAXABLEPRODUCT_H
#include "Product.h"

namespace w6 {
    class TaxableProduct : public Product {
        int taxType;
        static const double taxRate[2];

        public:
            // constructor
            TaxableProduct(int, double, char);
            // return price
            double getPrice() const;
            // returns a string of the tax type
            const char* getTaxType() const; 
            // display 
            void display(std::ostream&) const;
    };
}

#endif //W6_PRODUCT_H