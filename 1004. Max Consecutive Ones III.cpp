// 1004. Max Consecutive Ones III
// BruteForce approach good for logic 
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {1,1,1,0,0,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_len = 0;
    int k=2;
    for(int i=0; i<n; i++){
        int len =0;
        int zeros = 0;
        for(int j=i; j<n; j++){
            if(arr[j]==0){
                zeros++;
            }
            if(zeros<=k){
                len = j-i+1;
                max_len = max(len,max_len);
            }
            else{
                break;
            }
        }
        
    }
    cout << max_len;
}
