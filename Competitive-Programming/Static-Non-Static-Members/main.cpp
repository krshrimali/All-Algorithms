//
// Created by kushashwa on 28/3/19.
// Reference: https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.cbclx01/cplr039.htm

#include <iostream>

struct X {
private:
    int i;
    static int si; // static member does not have this pointer
public:
    void set_i(int arg) {
        i = arg;
    }

    static void set_si(int arg) {
        si = arg;
    }

    void print_i() {
        std::cout << "i: " << i << std::endl;
        std::cout << "this->i: " << this->i << std::endl;
    }

    static void print_si() {
        std::cout << "si: " << si << std::endl;
        // Error: this is unavailable for static member functions
        // std::cout << "this->si" << this->si << std::endl;
    }
};

int X::si = 77; // Initializer static data member

int main() {
    X xobj;
    xobj.set_i(3);
    xobj.print_i();

    X::print_si();
    X::set_si(40);
    X::print_si();
}