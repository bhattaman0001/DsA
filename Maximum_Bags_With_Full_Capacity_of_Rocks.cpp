class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int ad) {
        for(int i =0;i<c.size();i++){
            c[i]=c[i]-r[i];
        }
        sort(c.begin(),c.end());
        int i =0;
        while(i<c.size() && ad>=c[i]){
            ad=ad-c[i];
            i++;
        }
        return i;
    }
};
