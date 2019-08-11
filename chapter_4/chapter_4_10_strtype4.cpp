// strtype4 -- getline to initial str

#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int main(){

    char charr1[30];
    string str;
    cout<<"before initailization"<<endl;
    cout<<"length of charr1: "<<strlen(charr1)<<endl;
    cout<<"length of str"<<str.size()<<endl;

    cout<<"please enter a line for text"<<endl;
    cin.getline(charr1, 30);
    cout<<"enter an another line for text"<<endl;
    getline(cin, str);

    cout<<"after assignment"<<endl;
    cout<<"length of charr1: "<<strlen(charr1)<<endl;
    cout<<"length of str"<<str.size()<<endl;
}

