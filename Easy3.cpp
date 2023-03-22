#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
            ans[i].resize(i+1);
            ans[i][0]=1;
            ans[i][i]=1;
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
       return ans; 
    }    

int main(){
    int numRows;
    cin>>numRows;
    vector<vector<int>> ans = generate(numRows);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        cout<<ans[i][j];
        cout<<endl;
    }
    
    //cout<<"hello";
    return 0;
}