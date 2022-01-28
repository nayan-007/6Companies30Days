
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int height(int N){
        int i=1;
        int res=1;
        while(res<=N){
            res+= (i+1);
            i++;
        }
        return i-1;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.height(N)<<endl;
    }
    return 0;
}  
