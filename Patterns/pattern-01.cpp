#include <iostream>
using namespace std;

int main(){

    cout << "Pattern Lecture" << endl;


    int n = 5;
   


    for(int i = 0; i<n;i++)//outer
    { 
        char a = 'A';
        for(int j = 0; j<n;j++) //inner
        { 
            cout << a << " ";
            a = a +1;
        }

        cout << endl; // after inner loop 1 line print
    }




    return 0;
}