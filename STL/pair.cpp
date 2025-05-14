#include<iostream>
using namespace std;

// pair --> used to maintain relation b/w two things

int main(){
    pair<int, string> p;
    // p = make_pair(2, "navi");
    p = {2, "Singh"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> pair_array[3];
    pair_array[0] = {1,2};
    pair_array[1] = {2,3};
    pair_array[2] = {3,4};
    swap(pair_array[0], pair_array[1]);
    for(int i = 0; i < 3; i++){
        cout << pair_array[i].first << " " << pair_array[i].second << endl;
    }

    // taking input in pair
    pair<int, string> k;
    cout << "Enter the first value of a pair: " << endl;
    cin >> k.first;
    cout << k.first;
    
    return 0;
}