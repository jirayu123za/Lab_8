#include<iostream>
using namespace std;

char before(char x){
    if(x == 65){
        return x = 'Z';
    }
    if(x >= 65 && x <= 90){
        x = x-1;
    }
    else{
        return '0';
    }
    return x;
}
