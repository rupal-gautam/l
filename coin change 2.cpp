class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int a[amount+1];
        for(int i=0;i<=amount;i++)
        {
            a[i]=0;
        }
    	a[0]=1;
    	for(int i=0;i<coins.size();i++) {
    		for(int j=coins[i];j<=amount;++j) {
    			a[j]+=a[j-coins[i]];
    		}    		
    	}
    	return a[amount];     
    }
};