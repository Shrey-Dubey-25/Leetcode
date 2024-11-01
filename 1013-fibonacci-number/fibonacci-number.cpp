class Solution {
public:
    int fb(int n,int arr[]) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(arr[n-1]==-1){
            arr[n-1]=fb(n-1,arr);
        }
        if(arr[n-2]==-1){
            arr[n-2]=fb(n-2,arr);
        }
        arr[n]=arr[n-1]+arr[n-2];
        return arr[n];
    }
    int fib(int n) {
        if(n==1){
            return 1;
        }
        if(n==0){
            return 0;
        }
        int a[n+1];
        for(int i=2;i<n;i++){
            a[i]=-1;
        }
        a[0]=0;
        a[1]=1;
        return fb(n,a);

    }
};