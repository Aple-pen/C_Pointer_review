#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#define CHAR_LEN 30

#include <iostream>
#include <cstring>


using namespace std;

class Printer{
    private:
        char name[CHAR_LEN];
    public : 
        void SetString(char *string);
        void ShowString();
};

inline void Printer::SetString(char *string){
    strcpy(name,string);
}

inline void Printer::ShowString(){
    cout << name << endl;
}

#endif