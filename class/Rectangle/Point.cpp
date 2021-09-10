#include <iostream>
#include "Point.h"
using namespace std;

bool Point :: InitMembers(int xpos,int ypos){
    if(xpos<0 || ypos<0){
        cout<< "error" << endl;
        return false;
    }

    x=xpos;
    y=ypos;
    return true;
}

int Point :: GetX() const{
    return x;
}

int Point :: GetY() const{
    return y;
}

bool Point :: SetX(int x){
    if(0>xpos || xpos>100){
        cout << "error number" << endl;
        return false;
    }
    x=xpos;
    return true;
}

bool Point :: SetY(int y){
    if(0>ypos || ypos>100){
        cout << "error number" << endl;
        return false
    }
    y=ypos;
    return true;
}