#include <bits/stdc++.h>
using namespace std;
bool canBeEqual(string s1, string s2){
    if (s1.length() !=4 || s2.length() != 4 ) return false;
    if (s1[0] == s2[0] && s1[2] != s2[2]) { return false; }
    if (s1[0] != s2[0] && s1[2] == s2[2]) { return false; }
    if (s1[1] == s2[1] && s1[3] != s2[3]) { return false; }
    if (s1[1] != s2[1] && s1[3] == s2[3]) { return false; }

    if (s1[0] != s2[0] && s1[2] != s2[2]){
        swap(s1[0], s1[2]);
        if (s1[0] != s2[0] || s1[2] != s2[2])
            return false;
    }
     if (s1[1] != s2[1] && s1[3] != s2[3]){
        swap(s1[1], s1[3]);
        if (s1[1] != s2[1] || s1[3] != s2[3])
            return false;
    }


    return true;
    
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << (canBeEqual(s1, s2) ? "true" : "false");
}