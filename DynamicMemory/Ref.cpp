#include <iostream>


using namespace std;
int main(){
    int *ptr = new int;
    int &ref = *ptr; //? 이해가 잘안감.. *ptr 은 주소가 아닌 값인데 왜 참조자에 대입?
    ref = 20;
    cout << *ptr <<endl;
    cout << ptr <<endl;

    return 0;
}