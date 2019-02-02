class Solution {
public:
    vector<int> diStringMatch(string S) {
        int I = 0,D = S.size();
        vector < int > arr;
        for(auto it : S){
            if(it == 'I'){
                arr.push_back(I);
                I++;
            }
            else if(it == 'D'){
                arr.push_back(D);
                D--;
            }
        }
        arr.push_back(I);
        return arr;
    }
};