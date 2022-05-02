//
// Created by plott on 4/13/22.
//

#ifndef FUNCTIONS_FUNCTIONS_H
#define FUNCTIONS_FUNCTIONS_H
#include <string>

//Overloading a function (Same name, different parameters)
int add(int a, int b);
double add(int a, double b);
double add(double a, double b);
std::string add(std::string& a, std::string& b);

//template <class T>
//T add (T a, T b){
//    return a+b;
//}

#endif //FUNCTIONS_FUNCTIONS_H
