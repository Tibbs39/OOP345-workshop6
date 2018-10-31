// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#include <iomanip>
#include "TaxableProduct.h"

namespace w6 {
    // declare our static class variable
    const double TaxableProduct::taxRate[] = { 13, 8 };

    // constructor
    TaxableProduct::TaxableProduct(std::string prodNum, double price, char taxCode) : Product(prodNum, price) {
        if (taxCode == 'H') 
            taxType = 0;
        else if (taxCode == 'P') 
            taxType = 1;
    }

    // returns price
    double TaxableProduct::getPrice() const {
        return Product::getPrice();
    }

    const char* TaxableProduct::getTaxType() const {
        return taxType == 0 ? "HST" : "PST";
    }

    void TaxableProduct::display(std::ostream& os) const {
        Product::display(os);
        os << std::setw(4) << getTaxType();
    }
}