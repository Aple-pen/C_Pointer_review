#include<iostream>

using namespace std;
int main(){
    /** 변수의 주소크기를 구해보자 **/
    // char ch;
    // int in;
    // double db;

    // char *pc = &ch;
    // int *pi = &in;
    // double *pd = &db;

    // cout << "char : " << sizeof(&ch) <<endl;
    // cout << "int : " << sizeof(&in) << endl;
    // cout << "double : " << sizeof(&db) <<endl;


    /** 포인터 대입시 형변환 테스트 **/

    int a = 10;
    int *pa = &a;
    int *pb;
    double *pc;

    pb = pa;
    pc = (double *)pa;

    cout << "pb : " <<*pb << endl;
    cout << "(double) a : " <<(double)a <<endl;
    cout << "pc : "<< *pc <<endl;
    cout << "pc : " << pc <<endl;

    return 0;
}