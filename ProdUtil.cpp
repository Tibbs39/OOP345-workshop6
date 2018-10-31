// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Oct 29, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#include <string>
#include <cctype>
#include "ProdUtil.h"
#include "Product.h"
#include "TaxableProduct.h"

namespace w6 {
    std::ostream& operator<<(std::ostream& os, const iProduct& src) {
        src.display(os);
        os << std::endl;
        return os;
    }

    iProduct* readProduct(std::ifstream& ifs) {
        char c = ifs.peek();
        if (c != EOF) {
            std::string prodNum;
            double price;
            ifs >> prodNum >> price;
            ifs.ignore(); // ignores whitespace after price;
            c = ifs.peek();
            if (std::isalpha(c)) {
                ifs.ignore(256,'\n');
                // valid tax code
                if (c == 'H' || c == 'P')
                    return new TaxableProduct(prodNum, price, c);
                // invalid tax code throw error
                std::string err = "Unrecognizeable Tax Code!";
                throw err;
            } else {
                return new Product(prodNum, price);
            }
        } else {
            return nullptr;
        }
    }
}