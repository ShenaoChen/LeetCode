#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=1;j<=i;j++)
                printf("()");
            for(int j=1;j<=n-i;j++)
                printf("(");
            for(int j=1;j<=n-i;j++)
                printf(")");
            printf("\n");
        }
    }
    return 0;
}