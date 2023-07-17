#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    vector<string> v;
    string s ;
    string tmp;
    cout << "Nhap xau = ";
    getline(cin,s);
    stringstream A(s);
    while ( A >> tmp)
        v.push_back(tmp);
    cout << "Xau sau khi chuan hoa la:";
    for( int i = v.size() -1; i>=0; i--)
        cout << " " << v[i];
    
    return 0;


    
}