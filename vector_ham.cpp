#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(10); // khai bao mot vector co 10 phan tu
    vector<int> b(10, 100); // khai báo một vector có 10 phan tử, và 10 phần tử đó đều bằng 100
    v.push_back(10);
    v.push_back(20);
    cout << "So phan tu trong vector la: " << v.size() << endl;
    cout << "Phan tu dau tien trong vector la: " << v[0] << endl;
    cout << "Phan tu cuoi cung trong vector la: " << v[v.size() -1] << endl;
    cout << "Phan tu cuoi cung trong vector la: " << v.back() << endl;
    
    // in cac phan tu trong vector 
    for (int x : v)
        cout << x << endl;
    // dung iterator de tham chieu toi cac phan tu trong mang
    for (vector<int>::iterator p = v.begin() ; p != v.end(); p++)
        cout << *p << endl;
    // dung auto
    for (auto p = v.begin() ; p != v.end() ; p++)
        cout << *p << endl;

    // khi khai báo một vector mà không khởi tạo vector dó có bao nhiêu phần tử giống line 6 thì làm như sau
    int n;
    cout << "Nhap so phan tu cua vector: ";
    cin >> n;
    for (int i=0; i<n ; i++)
    {
        int x;
        cout << "v[" << i << "] = ";
        cin >> x;
        v.push_back(x);
    }
    return 0;
}
