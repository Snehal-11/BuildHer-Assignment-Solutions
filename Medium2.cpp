#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    int num1 = 0, num2 = 0, cnt1 = 0, cnt2 = 0;
    
    for(int i=0;i<n;i++){
        if(num1 == nums[i]){
            cnt1++;
        }
        else if(num2 == nums[i]){
            cnt2++;
        }
        else if(cnt1 == 0){
            num1 = nums[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0){
            num2 = nums[i];
            cnt2 = 1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    
    cnt1 = 0;
    cnt2 = 0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i] == num1){
            cnt1++;
        }
        if(nums[i] == num2){
            cnt2++;
        }
        
    }
    if(cnt1 > n/3 ){
        ans.push_back(num1);
    }
    if(num1!=num2 and cnt2 > n/3){
        ans.push_back(num2);
    }
    
    return ans;
}

int main(){
    int n; 
    cin>>n; // taking size of vector from user
    int a;
    vector<int> nums;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    vector<int> ans = majorityElement(nums);
    cout<<"The array answer is : ";
    for(int i=0; i<ans.size(); i++)
    {
        
        cout<<ans[i]<<" ";
        
    }
    return 0;
}
