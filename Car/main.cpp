#include <iostream>

class Car{
    double msrp;
public:
    Car();
    Car(double m);
    double get_msrp();
    friend double get_dealer_price(const Car& c);
    friend class Taxes;
};

class Taxes{
    double rate;
public:
    Taxes();
    Taxes(double r);
    double get_auto_tax(const Car& c);
};

Car::Car(){
    msrp = 0;
}

Car::Car(double m){
    msrp = m;
}

double Car::get_msrp() {
    return msrp;
}

double get_dealer_price(const Car& c){
    return c.msrp * 0.75;
}

Taxes::Taxes() {
    rate = 0;
}

Taxes::Taxes(double r) {
    rate=r;
}

double Taxes::get_auto_tax(const Car &c) {
    return c.msrp * rate;
}

int main() {
    Car c(31200.99);
    Taxes t(0.17);
    double msrp = c.get_msrp();
    std::cout << "For this car I paid: $" << msrp << std::endl;
    double dealer_price = get_dealer_price(c);
    std::cout << "The dealer only paid: $" << dealer_price << std::endl;

    double tax = t.get_auto_tax(c);
    std::cout << "I paid $" << tax << " in taxes." << std::endl;

    return 0;
}
