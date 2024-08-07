#include <bits/stdc++.h>

using namespace std;
#define MAXLEN 100000

int main(){
    string str;
    cin >> str;

    int length = str.length();
    cout << length << endl;

    if(length > MAXLEN) return 0;

    string sub_str = str;
    string test = str;
    for (int i = 0; i < length; i++){
        sub_str.erase(0, 1);
        if(sub_str == test){
            cout << sub_str.length();
        }
    }
    

    return 0;
}

// g++ teste.cpp -o teste.exe ; Get-Content input.txt | ./teste.exe

/*  asda
    sda
    da
    a
*/ 