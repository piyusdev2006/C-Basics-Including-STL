#include<bits/stdc++.h>
#include<iostream>
using namespace std;


bool isPositive(int x){
    return x > 0;
};

int main(){
    // lambda function
    // cout << [](int x){return x+2;}(5) << endl;
    // cout << [](int x, int y){return x+y+2;}(5, 7) << endl;

    // it can also be assinged to a variable
    // auto sum = [](int x, int y){return x+y;};
    // cout << sum(45 , 18) << endl;

    vector<int> v = {-2, -4 ,-5};
    // all_of()
    cout << all_of(v.begin(), v.end(), 
    [](int x){return x > 0;}
    );
    cout << endl;
    cout << all_of(v.begin(), v.end(), isPositive );
    cout << endl;

    // any_of()
    cout << any_of(v.begin(), v.end(), 
    [](int x){return x > 0;}
    );
    cout << endl;

    // none_of --> if none of matches then it returns true

    cout << none_of(v.begin(), v.end(), 
    [](int x){return x > 0;}
    );
    return 0;
}