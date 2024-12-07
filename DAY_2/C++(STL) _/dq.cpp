#include <bits/stdc++.h>
using namespace std;

int dq(){
    deque<int> dq;
    dq.push_back(10); //push_back is used to insert the element in the deque from the back
    dq.push_back(20); 
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    //other operations of deque
    dq.push_front(60); //push_front is used to insert the element in the deque from the front
    dq.push_front(70);
    //
    dq.emplace_front(80); //emplace_front is used to insert the element in the deque from the front
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
}

//deque is a dynamic array it can change its size and it is a part of stl
//WAY OF DEFINING DEQUE
int defdeque(){
    deque<int> dq; //this is the way of defining a deque
    deque<int> dq(5); //this is the way of defining a deque of size 5
    deque<int> dq(5, 10); //this is the way of defining a deque of size 5 and all the elements are 10
    deque<int> dq = {1, 2, 3, 4, 5}; //this is the way of defining a deque with elements 1, 2, 3, 4, 5
    deque<string> dq1 = {"a", "b", "c", "d", "e"}; //this is the way of defining a deque with elements a, b, c, d, e
}

//all finctions of deque
//begin , end, rbegin, rend, size, empty, front, back, push_front, push_back, pop_front, pop_back, insert, erase, clear, swap, resize, sort, reverse

int deffunc(){
    deque<int> dq = {1, 2, 3, 4, 5};
    deque<int>::iterator it;


    for(it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    for(auto it = dq.rbegin(); it != dq.rend(); it++){
        cout << *it << "\n";
    }


    cout << dq.size() << "\n";
    cout << dq.empty() << "\n";
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";
    dq.push_front(10);
    dq.push_back(20);



    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    dq.pop_front();
    dq.pop_back();
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    dq.insert(dq.begin(), 30);
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    dq.clear();
    cout << dq.empty() << "\n";
    dq.push_back(1);
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";



    dq.resize(10);  // {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    deque<int> dq1 = {10, 20, 30, 40, 50};
    dq.swap(dq1);
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << "\n";
    }
    for(auto it = dq1.begin(); it != dq1.end(); it++){
        cout << *it << "\n";
    }
    dq.resize(5);

    
}