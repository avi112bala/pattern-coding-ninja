#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
   int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces =1;
        while(spaces<=n-i){
            cout<<' ';
            spaces=spaces+1;
        }
        int stars=1;
        while(stars<=i){
            cout<<stars;
            stars=stars+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
    
}

