/**
 * 배열과 포인터의 관계
 **/

#include <iostream>

using namespace std;
// 배열명 역할을 하는 포인터
// int main(){
//     int ary[3];
//     int i;

//     for(i=0;i<sizeof(ary)/sizeof(int);i++){
//         if(i == 0){
//             *(ary + i) = 10;
//         }else{
//             *(ary+i) = *(ary+i-1) + 10; //ary[1]  == *(ary + 1)
//         }
//             cout<<ary[i]<<endl;
//     }
//}

//배열명과 포인터
int main(){
    int ary[3] = {1,2,3};
    int *pa = ary;
    int i;
    cout << "array result : ";

    for(i=0;i<sizeof(ary)/sizeof(int);i++){
        cout << *pa <<endl;
        pa++; //또는 pa + 1
    }
}