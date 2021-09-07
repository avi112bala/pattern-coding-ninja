#include <iostream>
using namespace std;

int main() {
   int n;
    cin>>n;
    int i=1,k=1;
    while(i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<' ';
            spaces=spaces+1;
        }
           int j=1;
        k=i;
           while(j<=i){
              
               cout<<k;
               j++;
               k++;
           }
         j=i-1;
        while(j>=1){
            cout<<k-2;
            j=j-1;
            k--;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
        
    
    
    
}

