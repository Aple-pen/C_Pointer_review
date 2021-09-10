#ifndef __POINT_H_
#define __POINT_H_

using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        bool InitMembers(int xpos,int ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};

inline bool Point :: InitMembers(int xpos,int ypos){
    if(xpos<0 || ypos<0){
        cout<< "error" << endl;
        return false;
    }

    x=xpos;
    y=ypos;
    return true;
}

inline int Point :: GetX() const{
    return x;
}

inline int Point :: GetY() const{
    return y;
}

inline bool Point :: SetX(int xpos){
    if(0>xpos || xpos>100){
        cout << "error number" << endl;
        return false;
    }
    x=xpos;
    return true;
}

inline bool Point :: SetY(int ypos){
    if(0>ypos || ypos>100){
        cout << "error number" << endl;
        return false;
    }
    y=ypos;
    return true;
}

#endif