#include <iostream>
using namespace std;
int main(){
    int j,row;
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=1 , k=0; i<=row; ++i, k=0){
        for(j=1; j<=row-i ; ++j){
        cout<<" ";
       }
       while(k!= 2*i-1){
        cout <<"*";
        ++k;
       }
       cout << endl;
    }
    return 0;
}
