#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(10); //push_back is used to insert the element in the list from the back
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);
    ls.push_back(60);
    ls.push_back(70);
    ls.push_front(80); //push_front is used to insert the element in the list from the front
    ls.push_front(90);
    ls.emplace_front(100); //emplace_front is used to insert the element in the list from the front
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }

}

//More about list
//WAY OF DEFINING LIST
int deflist(){
    list<int> ls; //this is the way of defining a list
    list<int> ls(5); //this is the way of defining a list of size 5
    list<int> ls(5, 10); //this is the way of defining a list of size 5 and all the elements are 10
    list<int> ls = {1, 2, 3, 4, 5}; //this is the way of defining a list with elements 1, 2, 3, 4, 5
    list<string> ls1 = {"a", "b", "c", "d", "e"}; //this is the way of defining a list with elements a, b, c, d, e
}


//all finctions of list
int lsfunc(){
    //begin , end, rbegin, rend, size, empty, front, back, push_front, push_back, pop_front, pop_back, insert, erase, clear, swap, resize, sort, reverse
    list<int> ls = {1, 2, 3, 4, 5};
    list<int>::iterator it;
    for(it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    for(auto it = ls.rbegin(); it != ls.rend(); it++){
        cout << *it << "\n";
    }
    cout << ls.size() << "\n";
    cout << ls.empty() << "\n";
    cout << ls.front() << "\n";
    cout << ls.back() << "\n";
    ls.push_front(10);
    ls.push_back(20);
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    ls.pop_front();
    ls.pop_back();
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    ls.insert(ls.begin(), 30);
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    ls.erase(ls.begin());
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    ls.clear();
    cout << ls.size() << "\n";
    list<int> ls1 = {1, 2, 3, 4, 5};
    list<int> ls2 = {6, 7, 8, 9, 10};
    ls1.swap(ls2);
    for(auto it = ls1.begin(); it != ls1.end(); it++){
        cout << *it << "\n";
    }
    for(auto it = ls2.begin(); it != ls2.end(); it++){
        cout << *it << "\n";
    }
    ls1.resize(10);
    for(auto it = ls1.begin(); it != ls1.end(); it++){
        cout << *it << "\n";
    }
    ls1.sort();
    for(auto it = ls1.begin(); it != ls1.end(); it++){
        cout << *it << "\n";
    }
    ls1.reverse();
    for(auto it = ls1.begin(); it != ls1.end(); it++){
        cout << *it << "\n";
    }
}



//now we have to do a problem using list
//given a number n,like 2 and you have to print 20,18,16,14,12,10,8,6,4,2
int listprob(){
    int n;
    cin >> n;
    list<int> ls;
    for(int i = 2; i <= n; i+=2){
        ls.push_back(i);
    }
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *it << "\n";
    }
    return 0;
}

