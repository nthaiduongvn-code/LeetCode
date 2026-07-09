#include <bits/stdc++.h>
using namespace std;
 vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
    const int MOD = 1e9 + 7;
string ss;
long long kq=0;
vector <int> answer;
 int sum = 0;
    for(int i=0; i<queries.size(); i++){
        ss = s.substr(queries[i][0],
              queries[i][1]-queries[i][0]+1);
        for (char c: ss){   
            if (c != '0'){  
                sum += c-'0';
                kq = (kq*10 + c-'0')% MOD;
            } 
        }
        answer.push_back((kq * sum) % MOD);
        kq = 0;
        sum = 0;
    }
    return answer;
 }

 int main(){
    string s;
    cin >> s;
    int m;
    cin >> m;
    vector<vector<int>> queries(m, vector<int>(2));
    for (int i=0; i<m; i++){
        for (int j=0; j<2; j++){
            cin >> queries[i][j];
        }
    }
    vector<int> result = sumAndMultiply(s, queries);
    cout << "[";
    for (int i=0; i<result.size(); i++){
        cout << result[i];
        if (i != result.size()-1) { cout << "; ";}
    }
    cout << "]";
 }