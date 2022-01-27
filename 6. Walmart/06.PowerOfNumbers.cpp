# define mod 1000000007

class Solution{
    public:
    long long power(int N,int R)
    {
            if(R==0)
            {
                return 1;
            }
           if(R==1)
           {
               return N;
           }
           
           long long temp = power(N,R/2)%mod;
           temp=(temp*temp)%mod;
           if(R%2==0)
           {
               return (temp)%mod;
           }
           if(R%2!=0) 
           {
               return (N*temp)%mod;
           }
        
    }

};


long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}  
