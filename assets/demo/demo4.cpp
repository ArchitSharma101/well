#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    vector<char>vec(23);
    vec.resize(a.length()+b.length());
    for(int i=0;i<a.length();i++){
        vec.push_back(a[i]);
    }
    for(int i=a.length();i<vec.size();i++){
        vec.push_back(b[i]);
    }
    sort(vec.begin(),vec.end());
    vector<char>cvec;
    cvec.resize(c.length());
    for(int i=0;i<c.length();i++){
        cvec.push_back(c[i]);
    }
    sort(cvec.begin(),cvec.end());
    int check=true;
    if(vec.size()==cvec.size()){
        for(int i=0;i<cvec.size();i++){
            if(vec[i]==cvec[i]){
            check=0;
        }
        else{
            check=1;
            break;
        }
    }}
    else{
        check=0;
    }   
    if(check=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}