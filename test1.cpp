#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<stack>
#include<map>

using namespace std;


 vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3){//common elements in 3 different arrays
            vector<int>op(0,max(max(n1,n2),n3));
            int i=0,j=0,k=0,l=a[i];
            
            while(i<n1 && j<n2 && k<n3) {
                if(a[i]==b[j]&&b[j]==c[k]){ 
                    if(a[i]!=l){
                        op.push_back(a[i]);
                    }
                    i++;j++;k++;
                }
                else if(a[i]<b[j]){
                    i++;
                }
                else if(b[j]<c[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            return op;
        }


void rowwaveprint(){
    vector<vector<int>>a{{1,2,3},
                         {5,6,7},
                         {8,9,10}};
    for(int i=0;i<a.size();i++){
        if(i%2==0){
            for(int j=0;j<a[0].size();j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=a[0].size()-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }

        }
    }   
}

void colwaveprint(){
     vector<vector<int>>a{{1,2,3},
                         {5,6,7},
                         {8,9,10}};
           for(int i=0;i<a[0].size();i++){
            if(i%2==0){
            for(int j=0;j<a.size();j++){
                cout<<a[j][i]<<" ";
            }
            }
            else{
            for(int j=a.size()-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
            }
            
           }
}


void addarr(){//add two numbers given in an array
     
    int a1[]={4,4,4,4};
    int a2[]={9,9,9};
    
    int c=0,d=0,k;
   
    int i=sizeof(a1)/sizeof(a1[0])-1;
    int j=sizeof(a2)/sizeof(a2[0])-1;
    int a3[(max(sizeof(a1)/sizeof(a1[0]),sizeof(a2)/sizeof(a2[0]))+1)];
    k=sizeof(a3)/sizeof(a3[0])-1;
    a3[0]=0;
    while(i>=0 && j>=0){
        
        int x=a1[i]+a2[j]+c;
        d=x%10;
        a3[k]=d;
        c=x/10;
        
        i--;
        j--;
        k--;
    }   
    while(j>=0){
        int x=a2[j]+c;
        d=x%10;
        a3[k]=d;
        c=x/10;
        j--;
        k--;
    }
     while(i>=0){
        int x=a1[i]+c;
        d=x%10;
        a3[k]=d;
        c=x/10;
        i--;
        k--;
    }
    if(c){
        a3[0]=c;
    }
    cout<<"i="<<i<<"j="<<j<<"k="<<k;
    cout<<endl;

    for(auto i:a3){
        cout<<i<<" ";
    }
   
}

string calc_Sum(int *a,int n,int *b,int m){//add two numbers given in array andreturn the sum in a string
    int i=n-1,j=m-1,c=0,x,d;
    string s;
    
    while(i>=0 && j>=0){
        x=a[i]+b[j]+c;
        d=x%10;
        s.push_back(d+'0');
        c=x/10;
        i--;
        j--;
    }
    while(i>=0 ){
        x=a[i]+c;
        d=x%10;
        s.push_back(d+'0');
        c=x/10;
        i--;
        
    }
    while(j>=0 ){
        x=b[j]+c;
        d=x%10;
        s.push_back(d+'0');
        c=x/10;
        j--;

    }
    if(c){
        s.push_back(c+'0');
    }
    while(s[s.length()-1]=='0'){
        s.pop_back();
    }
    reverse(s.begin(),s.end());
    
    return s;
}

void multiplyarr(){//multiply 2 numbers in an array
int a[]={9,9};
int m=5,x,j=sizeof(a)/sizeof(a[0])-1,c=0,d;
vector<int>v;

while(j>=0){

    x=(a[j]*m)+c;
    d=x%10;
    v.push_back(d);
    c=x/10;
    j--;

} 
    if(c){
        v.push_back(c);
}
reverse(v.begin(),v.end());
for(auto i:v){
    cout<<i<<" ";
}
}

void factorialoflargenumber(){
    vector<int> a;
a.push_back(1);
int m=5,x,c=0;

for(int i=2;i<=m;i++){
    for(int j=0;j<a.size();j++){
        x=(a[j]*i)+c;
        a[j]=x%10;
        c=x/10;
    }
    if(c){
        a.push_back(c);
    }
    c=0;
    
}
reverse(a.begin(),a.end());
for(auto i:a){
    cout<<i<<" ";
}
}
void findmissing(){//find missing element using binary search;
    vector<int>v{1,2,3,4,6,7,8};//{1,2,3,4,6,7,8}
                                //{0,1,2,3,4,5,6}
    int s=0,e=v.size(),l=-1,m,t=3;
    while(s<=e){
        m=s+(e-s)/2;
    if(v[m]==m+1){
        s=m+1;
    }
    else{
        e=m-1;
    }
    }
    cout<<v[e]+1<<" is the missing number";
}
int pivotinROTSOR(vector<int>& v){//{5,7,1,2,3}
    int m,e=v.size()-1,s=0;

    while(s<e){
        m=s+(e-s)/2;
        if(m+1<v.size() && v[m]>v[m+1]){
            return m; 
        }
        
        
        else if(v[s]>v[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return s;
}
double SqRtUsiBS(){//sqrt using binary search
    
    int t,p;
    cout<<"Enter the number "<<endl;
    cin>>t;
    cout<<"Enter the precision "<<endl;
    cin>>p;
    int a,s=0,e=t,m;
    while(s<=e){
        m=s+(e-s)/2;
        if(m*m<=t){
            a=m;
            s=m+1;
        }
        else if(m*m>t){
            e=m-1;
        }
    }    

    double fa=a,st=0.1;
    for(int i=0;i<p;i++){
        for(double j=a;j*j<=t;j+=st){
            fa=j;
        }
    st/=10;
    }
    return fa;
}
void findin2DusingBsearch(vector<vector<int>>v,int t){//binary search in 2d array
    int r=v.size(),c=v[0].size(),s=0,e=r*c-1,m;
    while(s<=e){
        m=s+(e-s)/2;
        int ri=m/c;  //very important formulas to remember in this case rowindex of middle = mid/col,colindex of middle = mid%col
        int ci=m%c;
        int el=v[ri][ci];
        if(el==t){
            cout<<ri<<" "<<ci;
            break;
        }
        else if(el<t){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    
}

int Nearlsorted(vector<int>v,int ele){//search in nearly sorted array(element can be shifted 1 place either to the left or to the right).
int s=0,e=v.size(),m;
    while(s<=e){
        m=s+(e-s)/2;
        if(v[m]==ele){
            return m;
        }
        else if(m-1>0 && v[m-1]==ele){
            return m-1;
        }
        else if(m+1<v.size() && v[m+1]==ele){
            return m+1;
        }
        else if(v[m]<ele){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}
double divUsingBS(){
    cout<<"Enter the numbers ->";
    int a,b,p;
    cin>>a>>b;
    cout<<"Enter precision";
    cin>>p;
    
    double st=0.1,fa;
    int x,m,s=0,e=a;
    while(s<=e){
        m=s+(e-s)/2;
        if(b*m==a){
            return m;
        }
        else if(b*m<a){
            x=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    
    for(int i=0;i<p;i++){
        for(double j=x;j*b<=a;j+=st){
            fa=j;
            
        }
        st/=10;
    }
    return fa;
}
int findoddocc(vector<int>v){//vector<int>v{1,1,2,2,3,3,4,4,3,600,600,5,5} find odd times occuring element where every element 
                                         //(0,1,2,3,4,5,6,7,8, 9, 10,11,12) occurs even number of times and in pairs.
                                         
    int s=0,e=v.size()-1,m;
    while(s<e){
        m=s+(e-s)/2;
        if(m%2==0){
            if(v[m]==v[m+1]){
                s=m+2;
            }
            else{
                e=m;
            }
        }
        else if(m%2!=0){
            if(v[m-1]==v[m]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
    }    
    return s;
}
void buBBleSort(vector<int>v){
    bool swp;
    for(int i=0;i<v.size();i++){
        swp=false;//this is to ooptimize the bubble sort if it is false it means
                  // nothing is swapped so no need to check further
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>=v[j+1]){
                swp=true;
                swap(v[j],v[j+1]);
            }
        }
        if(swp==false){
            break;
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}


int search(vector<int>v,int el){
    int m,s=0,ans,e=v.size()-1;//1,2
    while(s<=e){
        m=s+(e-s)/2;
        if(v[m]==el){
            return m;
        }
        else if(v[m]<el){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
bool possible( int v[], int n, int nos,int m){//=m   22,23,67
        int x=0,i=0,c=0;
        while(x<m && i<n){
           
            x+=v[i++];
            
            if(x>m){
                c++;
                x=0;
                i--;
            }
            
            if(nos==c){
                return false;
            }
        }
        return true;
    }
    
    int findPages(int v[], int n, int nos) 
    {   
        
         int su=0;
         for(int i=0;i<n;i++){
             su+=v[i];
         }
         cout<<su<<" ";
         
         int ans,s=0,e=su,m;
         while(s<e){
            m=s+(e-s)/2;
             
            if(possible(v,n,nos,m)){
                ans=m;
                e=m;
            }
            else{
                s=m+1;
            }
         }
         cout<<ans;    
    }


	int NthRoot(int n, int m) {
    
    if(m==1){
        return 1;
    }
    if(n==1){
        return m;
    }
    int mid,s=0,e=m;
    while(s<=e){
    mid=s+(e-s)/2;
    
    if(pow(mid,n)==m){
      return mid;
    }
    else if(pow(mid,n)<m){
      s=mid+1;
    }
    else {
      e=mid-1;
    }
  }
  return -1;
}  

int findMedian(vector<vector<int> > &v) {
    vector<int>ans{};
    for(int i=0;i<v.size();i++){
        ans.push_back(i);
    }
    if(v.size()%2==1){
        
        return ans[ans.size()/2];
    }
    else{
        return ans[ans.size()/2+1];
    }
}

int val(vector<long long int>v,long long int m){
    long long int s=0;
    for(long long int i=0;i<v.size();i++){
        if(v[i]>m){
            s+=v[i]-m;
        }
    }
    return s;
}

int eko(vector<long long >v,long long int r){
    long long int s=0,e=-1,m;
    for(long long int i=0;i<v.size();i++){
        if(v[i]>e){
            e=v[i];
        }
    }
    long long int ans=-1;
    
    while(s<=e){
        m=s+(e-s)/2;
        if(val(v,m)==r){
            return m;
        }
        else if(val(v,m)<r){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
    }
    return ans;
}
void spiralprint(){
    int t,n,x;
    cin>>t;
    while(t--){
        vector<vector<int>>a;
        vector<int>in;
        cin>>n;
        int s=n;
        while(s--){
        while(n--){
            cin>>x;
            in.push_back(x);
        }
        a.push_back(in);
    }
    int m=a.size(),n=a[0].size();
    int left=0,top=0,right=n-1,bottom=m-1;
    
    while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        cout<<a[top][i]<<" ";
    }
    top++;

    for(int i=top;i<=bottom;i++){
        cout<<a[i][right]<<" ";
    }
    right--;
   if(top<=bottom){
    for(int i=right;i>=left;i--){
        cout<<a[bottom][i]<<" ";
    }
   bottom--;
   }
   if(left<=right){
    for(int i=bottom;i>=top;i--){
        cout<<a[i][left]<<" ";
    }
    
    left++;
}
}
}
}


int main(){
    int a=5,b=10;
}
    
    