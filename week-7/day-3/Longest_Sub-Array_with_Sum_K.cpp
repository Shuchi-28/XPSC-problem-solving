int n=arr.size(), l=0, r=0, ans=INT_MIN, sum=0;
        
        while(r<n)
        {
            sum+= arr[r];
            if(sum==k)
            {
                ans = max(ans, r-l+1);
            }
            else if(sum>k){
                while(sum>k)
                {
                    sum -= arr[l];
                    l++;
                }
                if(sum=k)
                {
                    ans = max(ans, r-l+1);
                }
            }
            
            r++;
        }
        return ans;