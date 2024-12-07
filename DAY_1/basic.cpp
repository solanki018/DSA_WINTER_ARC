#include <bits/stdc++.h>
using namespace std;

//in int fucntion you have to return something

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Hello World" << endl;
    return 0;
}

//in void function you can't return anything you can just print or do some operations
void solve1() {
    int n;
    cin >> n;
    vector<int> a(n);  //vector is a dynamic array it can change its size and it is a part of stl
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Hello World" << endl;
}
