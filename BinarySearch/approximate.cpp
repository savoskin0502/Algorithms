#include <iostream>
#include <cmath>
using namespace std;
 
int a[1000000];
 
int find(int l,int r,int x){
   
    int middle = (l+r)/2;  
    if(l>r)return r;
   
    if(a[middle] > x){
        return find(l,middle-1,x);
    }
    else if(a[middle] < x){
        return find(middle+1,r,x);
    }
    else return middle;
}
 
int main(){
 
    int n,k,answer;
    cin >> n >> k;
 
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
 
    while(k>0){
        int num;
        cin >> num;
        int pos = find(0,n-1,num);
        answer = a[pos];
        if(pos < 0) answer = a[pos+1];
        else if(abs(num - a[pos + 1]) < abs(num - a[pos])){
            answer = a[pos+1];
        }
        cout << answer << endl;
        k--;
    }
 
   
 
    return 0;
}