#include <bits/stdc++.h>
using namespace std;

//vector is a dyamic array it can change its size and it is a part of stl
int main(){
    vector<int> v;
    v.push_back(10); //push_back is used to insert the element in the vector from the back
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.emplace_back(100);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}

//More about vector
//WAY OF DEFINING VECTOR
// vector<int> v; //this is the way of defining a vector
// vector<int> v(5); //this is the way of defining a vector of size 5
// vector<int> v(5, 10); //this is the way of defining a vector of size 5 and all the elements are 10
// vector<int> v = {1, 2, 3, 4, 5}; //this is the way of defining a vector with elements 1, 2, 3, 4, 5

//VECTOR ITERATORS
int vectoriter(){
         vector<int> vec = {1, 2, 3, 4, 5};
        vector<int>::iterator it;
        for(it = vec.begin(); it != vec.end(); it++){
            cout << *it << "\n";  // *it is used to get the value of the iterator and * is called dereferencing operator
}
}

//now there is another way of defining vector iterators

int vectoriter1(){
    vector<int> vec = {1, 2, 3, 4, 5};
    for(auto it = vec.begin(); it != vec.end(); it++){ //auto is used to automatically detect the data type of the iterator
        cout << *it << "\n";
    }
}


//there are some other operation for the vectors 
// v.size() is used to get the size of the vector
// v.push_back() is used to insert the element in the vector from the back
// v.pop_back() is used to delete the element from the back
// v.insert() is used to insert the element at the given position
// v.erase() is used to delete the element at the given position
// v.clear() is used to delete all the elements of the vector
// v.empty() is used to check whether the vector is empty or not
// v.front() is used to get the first element of the vector
// v.back() is used to get the last element of the vector
// v.resize() is used to change the size of the vector
// v.swap() is used to swap the elements of the two vectors
// v.assign() is used to assign the elements of the vector to another vector
// v.at() is used to get the element at the given position
// v.begin() is used to get the starting position of the vector
// v.end() is used to get the ending position of the vector
// v.rbegin() is used to get the reverse starting position of the vector
// v.rend() is used to get the reverse ending position of the vector


//now we have to implement all these in a single problem using all functioanality of vector 
//Problem: Given a number n, print the first n numbers of the fibonacci series
int fib(){
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(0);  //{0}
    v.push_back(1);  //{0, 1}
    for(int i = 2; i < n; i++){
        v.push_back(v[i-1] + v[i-2]); //{0, 1, 1, 2, 3, 5, 8, 13, 21, 34}
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";  //0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    }
    return 0;
}

//now all other operations of vector
int operat(){
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v.size() << "\n";    //5
    v.push_back(6); //{1, 2, 3, 4, 5, 6}
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";   //1, 2, 3, 4, 5, 6
    }
    v.pop_back();
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";   //1, 2, 3, 4, 5 
    }
    v.insert(v.begin() + 2, 10);    //{1, 2, 10, 3, 4, 5}
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";   //1, 2, 10, 3, 4, 5
    }
    v.erase(v.begin() + 2);    //{1, 2, 3, 4, 5}
    for(int i = 0; i < v.size(); i++){ 
        cout << v[i] << "\n";        //1, 2, 3, 4, 5
    }
    v.clear();                    //{}
    cout << v.empty() << "\n";
    v.push_back(1);           //{1}
    cout << v.front() << "\n";  //1
    cout << v.back() << "\n";   //1
    v.resize(10);         //{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";    //1, 0, 0, 0, 0, 0, 0, 0, 0, 0
    }
    vector<int> v1 = {10, 20, 30, 40, 50};
    v.swap(v1); //{10, 20, 30, 40, 50}
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";      //10, 20, 30, 40, 50
    }
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << "\n";
    }
    v.assign(v1.begin(), v1.end());      //{10, 20, 30, 40, 50}
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    cout << v.at(2) << "\n";        //30
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";      //10, 20, 30, 40, 50
    }
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << "\n";     //50, 40, 30, 20, 10
    }
    return 0;
}
