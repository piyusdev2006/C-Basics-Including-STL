#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    vector<int> v = {2, 4, 6, 8, 10};
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    // vector<int> :: iterator it = v.begin();
    // for(it = v.begin(); it != v.end(); it++){
    //     cout << (*it) << endl;
    // }

    // traditinal loop
    vector<pair<int,int>> v_pair = {{2,4}, {1,3}, {4,5}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_pair.begin(); it != v_pair.end(); it++){
        cout << (*it).first << " " << (*it).second << " ";
    }
    cout << endl;

    // anther way of writing iterator when it points to a pair
    // (*it).first <=> (it->first) both are same 
    // for(it = v_pair.begin(); it != v_pair.end(); it++){
    //     cout << (it->first) << " " <<(it->second) << endl;
    // }


    // Range based loop


    // copy of vector values are passes here in value
    // for(int value : v){
    //     value++;
    //     // cout << value  << " ";
    // }

    // reference of vector values are passed here in &value
    // for(int &value : v){
    //     value++;
    // }

    for(auto value : v){
        // auto <=> int
        cout << value  << " ";
    }
    cout << endl;


    // reference of vector values are passed here in &value and it also works with vectors of pair
    vector<pair<int,int>> v1_pair = {{4,5}, {5,7}, {7,8}};
    for(auto &value : v1_pair){
        // auto <=> pair<int,int>
        cout << value.first << " " << value.second;
    }
    cout << endl;
    
    // auto keyword - it automatically detects the data type and perform action according
    


    
    

    return 0;
}