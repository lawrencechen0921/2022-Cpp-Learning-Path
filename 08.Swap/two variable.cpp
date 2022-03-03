#include<iostream>

using namespace std;

int main()
{
    // Do not use third variable only used two

    int a = 10;
    int b = 20;

    a = a + b;//30
    b = a - b;// 10
    a = a - b;//20

    cout << " a = " << endl;
    cout << " b = " << endl;

    return 0;

}