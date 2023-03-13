//                                               factorial of a number
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1)
    return 1 ;
    int ans=n*factorial(n-1);
    return ans;

}
int main(){
 cout<<" enter the number";
    int n;
    cin>>n;
   
    int ans=factorial(n);
    cout<<"factorial is"<<ans<<endl;

}
//                                                  reverse a number

#include<iostream>
using namespace std;
int printcount(int n){
    // base case
    if(n==1)
    return 1;
    // processing 
    cout<< n <<" ";
    // recursive relation
    int ans=printcount(n-1);
}

int main(){
    cout<<"enter the value";
    int n ;
    cin>>n;

    int ans=printcount(n);
    cout <<ans<<endl;

}

//                                                            fibonacci series
#include<iostream>
using namespace std;
int fib(int n){
    // base case
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    // recursive relation
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    cout<<"enter the value";
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans<<endl;
  


}