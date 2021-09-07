#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>

using namespace std;

class Calculator{
    private :
        double num1,num2;
        int add,div,min,mul;
    public : 
        void init();
        double Add(double a,double b);
        double Div(double a, double b);
        double Min(double a, double b);
        double Mul(double a, double b);
        void ShowOpCount();
};

inline void Calculator::init(){
    add = 0;
    div = 0;
    min = 0;
    mul = 0;
}

inline double Calculator :: Add(double a, double b){
    add+=1;
    return a + b;
}

inline double Calculator :: Div(double a, double b){
    div += 1;
    return a / b;
}

inline double Calculator :: Min(double a, double b){
    min += 1;
    return a-b;
}

inline double Calculator :: Mul(double a, double b){
    mul += 1;
    return a*b;
}


inline void Calculator :: ShowOpCount(){
    cout << "Add : " << add << "    Min : " << min << "     Div : " <<div<<"    Mul : " << mul <<endl; 
}


#endif