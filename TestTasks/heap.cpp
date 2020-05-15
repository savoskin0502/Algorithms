#include <iostream>
 
using namespace std;
 
int size = 0;
struct heap{
   
    int value[2 * 100001];
    void init(){
        for(int i=0;i<2 * 100001;++i){
            value[i] = int(-1e9);
        }      
    }
 
    void add(int x){
        value[size] = x;
        sift_up(size);
        size++;
    }  
   
    void extract_max(){
        int max_here = value[0];
        swap(value[0],value[size-1]);
        value[size-1] = int(-1e9);
        size--;
        sift_down(0);
        cout << max_here;
    }
 
    void sift_up(int pos){
        if (pos<=0) return;
        int parent_pos = (pos-1)/2;
        if(value[parent_pos] < value[pos]){
            swap(value[parent_pos],value[pos]);
            sift_up(parent_pos);
        }
    }
 
    void sift_down(int pos){
        if(pos==size) return;
        int ch1 = (2 * pos + 1);
        int ch2 = (2 * pos + 2);
        if(value[pos] < max(value[ch1],value[ch2])){
            if(value[ch1] < value[ch2]){
                swap(value[ch2],value[pos]);
                sift_down(ch2);
            }
            else if(value[ch1] >= value[ch2]){
                swap(value[ch1],value[pos]);
                sift_down(ch1);
            }
        }
    }
 
};
 
 
int main(){
 
    heap h;
    int n;
    cin >> n;
    int v;
    int x;
    h.init();
 
 
    for(int i = 0; i < n; ++i){
        
        cin >> x;
        if(x == 0){
            cin >> v;
            h.add(v);
        }
        else if(x==1){
            h.extract_max();
            cout << endl;
        }
    }
    return 0;
}
