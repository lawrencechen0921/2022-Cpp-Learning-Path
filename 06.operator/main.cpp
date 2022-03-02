#include<iostream>
using namespace std;

int main()
{

    // +,-,*.%
    cout << 5 + 2 << endl;
    cout << 5 /2  << endl;
    cout << 5 * 2 << endl;

    int counter = 7;
    counter ++;
    cout << counter << endl;
    counter --;
    cout << counter <<endl;

    int counter2 = 7;
    cout << counter2++ << endl;  //先cout 出原本的數值，然後當要執行下一個動作時，才會再拿已經加或減的數值去做運算
    cout << counter2-- << endl;
    cout << counter2  << endl;

    //  >,<, <=, >= , ==, !=,
    int a = 5, b =8;
    cout << (a == b);
    system("cls");

    // &&, ||, !
    cout <<  ( a == 5 && b == 3+5);
    system("cls");
    
    // =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7;
    x = x + 7;
    

    return 0;
}