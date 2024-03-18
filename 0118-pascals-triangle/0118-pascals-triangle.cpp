class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1){
            return {{1}};
}
        
    vector<vector<int>> mts = {{1},{1,1}};
        
  
    vector<int> previous = {1, 1};

    for (int i = 1; i <= numRows-2; i++)
    {

        vector<int> temp = {1};
        for (int j = 1; j < mts[i].size(); j++)
        {
            temp.push_back(mts[i][j] + mts[i][j-1]);
        }
        temp.push_back(1);
        mts.push_back(temp);
    }
        return mts;
    }
};