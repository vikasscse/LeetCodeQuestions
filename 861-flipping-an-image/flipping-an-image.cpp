class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(int i = 0; i < n; i++){
            int l = 0, r = image[i].size() - 1;

            while(l <= r){
                // swap + invert
                int temp = image[i][l] ^ 1;
                image[i][l] = image[i][r] ^ 1;
                image[i][r] = temp;

                l++;
                r--;
            }
        }
        return image;
    }
};