#include <iostream>

using namespace std;

int difference(int, int);
int main(){
    int a = 1;
    int b = 2;
    cout << difference(b, a) << endl;

    return 0;
}

int difference(int a, int b){
    int result = a - b;
    return result;
}