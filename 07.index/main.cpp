#include<iostream>
#include<string>

using namespace std;


int main(void)
{

    string a = "AWSLC would be the best software engineer";
    cout << a << endl;

    string *b = &a;  // b 為對 a 的指標
    cout << b << endl;


    string &c = a; //c 為對 a 的參考
    cout << a << endl;

    return 0;

}