#include <iostream>
#include <string.h>

using namespace std;

char * MakeStrAdr(int len){
    char *str = new char[len]; //cpp 에선 malloc or calloc 대신 new 키워드로 동적할당 가능
    
    return str;
}

int main(){
    char * str = MakeStrAdr(20);
    strcpy(str,"I am so happy~");
    cout << str <<endl;
    delete [] str;
    return 0;
}