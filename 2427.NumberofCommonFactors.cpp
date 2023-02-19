//https://leetcode.com/problems/number-of-common-factors/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
        int count =0;
        for(int i=1; i<=min(a,b); i++){
            if(a%i==0){
                if(b%i==0){
                    count++;
                }
            }
        }
        cout<< count;
        return 0;
    }