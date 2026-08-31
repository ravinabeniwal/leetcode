class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    int n=arr1.size() , m=arr2.size();
    vector<int>arr3;
    vector<int>arr4;
     for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
            if(arr1[i]==arr2[j])
            arr3.push_back(arr1[i]);
        }
    }
    
    for(int i=0;i<n;i++){
        bool found=false;
         for(int j=0;j<m;j++){
        if(arr1[i] ==arr2[j]){
        found=true;
        break;}}
        if(!found)
        arr4.push_back(arr1[i]);
       
    }
    sort(arr4.begin(),arr4.end());
    for(int x:arr4){
        arr3.push_back(x);
    }
    return arr3;
   
    }
};