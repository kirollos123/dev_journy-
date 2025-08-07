#include<iostream>
using namespace std;
#include <string>
int main(){
    const int N =200; 

    
    int n , a [N];
    cout << "Enter the number of elements: ";
    cin >> n ;
    for(int i =0 ;i<n ;i++){
        cin >> a[i];
    }
    bool incresing =1;
    for( int i =1; i<n ;i ++){
        if(a[i]<a[i-1]){
            incresing=0;
            break;
        }
    }
    if(incresing){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
    return 0;
}