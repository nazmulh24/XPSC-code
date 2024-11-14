

//__Name --> First negative in every window of size k
//__Link --> https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) 
    {
        int n= arr.size();
        
        int l=0, r=0;
        vector<int> ans;
        queue<int> q;
        
        while(r<n)
        {
            if(arr[r]<0)
                q.push(arr[r]);
                
            if(r-l+1 == k)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front());
                    
                    if(arr[l]==q.front())
                        q.pop();
                }
                else
                    ans.push_back(0);
                    
                l++;
                r++;
            }
            else
                r++;
        }
        
        return ans;
    }
};

