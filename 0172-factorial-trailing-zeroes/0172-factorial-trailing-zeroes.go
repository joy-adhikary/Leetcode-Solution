func trailingZeroes(n int) int {
    
    ans:=0
    for n>=5{
         n=n/5
        ans=ans+n;
    }
   return ans
}
