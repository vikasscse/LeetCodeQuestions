class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int j=0;
            while(j<m){
                if(abs(arr1[i]-arr2[j])<=d){
                    cnt++;
                    break;
                }
                j++;
            }
        }
        return arr1.size()-cnt;
    }
};