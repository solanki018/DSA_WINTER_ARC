#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int ,int> pp;
    pp.first = 10;
    pp.second = 20;
    cout << pp.first << " " << pp.second << "\n";
}

int pairarr(){
    pair<int,int> parr[3] = {{1,2}, {3,4}, {5,6}};
    for(int i = 0; i < 3; i++){
        cout << parr[i].first << " " << parr[i].second << "\n";
    }
}

int pairstring(){
    pair<string, int> pstr[3] = {{"a", 1}, {"b", 2}, {"c", 3}};
    for(int i = 0; i < 3; i++){
        cout << pstr[i].first << " " << pstr[i].second << "\n";
    }  
}