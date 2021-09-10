#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle :: InitMembers(const Point &ul,const Point &lr){
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY()){
        cout << "wrong location"<<endl;
        return false;
    }

    upLeft = ul;
    lowRight = lr;
    return true;
}

void ShowRecInfo(){
    cout << "left top : " << '[' <<upLeft.x<<", ";
    cout << upLeft.y << ']' << endl;
    cout << "right bottom : " << '[' <<lowRight.x << ", ";
    cout << lowRight.y << ']' << endl;
}