class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<int> v;
        while(n)
        {
            v.push_back(n%2);
            n=n/2;
                
        }
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                c++;
            }
        }
        if(c==1)
        { return true;}
        else
        {return false;
            
        }
    }
};