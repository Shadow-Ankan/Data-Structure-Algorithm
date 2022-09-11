#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream ankan("sample.txt");
   string st1, st2;
   ankan>>st1;
   cout<<st1;
   cout<<endl;
    // getline(ankan, st2);
   cout<<st2;
    return 0;
}