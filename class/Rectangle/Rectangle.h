#ifndef __RECTANGLE_H_
#define __ RECTANGLE_H_

#include "Point.h"

using namespace std;
class Rectangle{
    private :
        Point upLeft;
        Point lowRight;

    public:
        bool InitMembers(const Point &ul,const Point &lr);
        void ShowRecInfo() const;
};

inline bool Rectangle :: InitMembers(const Point &ul,const Point &lr){
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY()){
        cout << "wrong location"<<endl;
        return false;
    }

    upLeft = ul;
    lowRight = lr;
    return true;
}

inline void ShowRecInfo(){
    cout << "left top : " << '[' << upLeft.x<<", ";
    cout << upLeft.y << ']' << endl;
    cout << "right bottom : " << '[' <<lowRight.x << ", ";
    cout << lowRight.y << ']' << endl;
}

#endif 