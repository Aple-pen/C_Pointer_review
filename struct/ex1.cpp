#include <iostream>

struct student{
    int num;
    int num2;
    double grade;
    char ch1;
};

int main(){
    // 구조체의 패딩 바이트를 알아보기
    struct student s1;

    std::cout<< sizeof(s1) <<std::endl;

    return 0;
}