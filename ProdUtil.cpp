// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#include <string>
#include "ProdUtil.h"
#include "Product.h"
#include "TaxableProduct.h"

namespace w6 {
    std::ostream& operator<<(std::ostream& os, const iProduct& src) {
        src.display(os);
    }

    iProduct* readProduct(std::ifstream& ifs) {
        if (ifs.peek() != '\n') {
            int prodNum;
            double price;
            ifs >> prodNum >> price;
            char c = ifs.peek();
            // number
            if ('0' <= c && c <= '9') {
                return new Product(prodNum, price);
            // valid tax code
            } else if (c == 'H' || c == 'P') {
                return new TaxableProduct(prodNum, price, c);
            // invalid tax code throw error
            } else {
                std::string err = "Unrecognizeable Tax Code!";
                throw err;
            }
        }
    }
}