//Freeqency of latters
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
    string str_one;
    string str_two;
    string str_three;
    getline(cin,str_one);
    getline(cin,str_two);
    getline(cin,str_three);
    cout << str_one+str_two+str_three<<endl;
    cout << str_two+str_three+str_one<<endl;
    cout << str_three+str_one+str_two<<endl;
    cout << str_one.substr(0,10)+str_two.substr(0,10)+str_three.substr(0,10)<<endl;
}