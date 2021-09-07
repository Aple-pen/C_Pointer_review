#include <iostream>


using namespace std;
typedef struct __Point{
    int xpos;
    int ypos;
}Point;


Point& PntgAdder(Point &p1,Point &p2){
    Point sum = p1 + p2;
    return sum;
}

int main(){
    Point point;

    point.xpos = 2;
    point.ypos = 3;

    cout << PntgAdder(point.xpos,point.ypos) <<endl;

    return 0;
}