#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void){
    Point pos1;
    if(!pos1.InitMembers(-2,4))
        cout<<"fault init" <<endl;
    if(!pos1.InitMembers(2,4))
        cout <<"fault init" <<endl;
    
    Point pos2;
    if(!pos2.InitMembers(-2,4))
        cout<<"fault init" <<endl;
    if(!pos2.InitMembers(2,4))
        cout <<"fault init" <<endl;

    Rectangle rec;

    if(!rec.InitMembers(pos2,pos1))
        cout<<"rectangle init fault" <<endl;
    if(!rec.InitMembers(pos1,pos2))
        cout<<"rectangle init fault" <<endl;

    rec.ShowRecInfo();
    return 0;

}