#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(map<int,string> &m){
    cout << +"size : " << m.size() << endl;
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    map<int,string> m;
    
    // 1st method to insert value
    m[1] = "Navi";
    m[7] = "Piyush";
    m[5] = "Singh";

    m.insert({4,"Chotu"});
    m[5] = "singh";
    m[6] = "jeevan";


    auto it = m.find(3); // Time complexity => O(log(n))
    if(it == m.end()){
        cout << " No value ";
    }else{
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
 
    m.erase(it);  // Time complexity => O(log(n))
    m.clear();

    // print value using iterator 

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     // in older fashion
    //     // cout << (*it).first << " " << (*it).second << endl;
    //     // in newer fashion
    //     cout << it->first << " " << it->second << endl;
    // }
    cout << endl;
    print(m);
    
    return 0;
}