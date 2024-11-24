bool isPalindrome(int x) 
{
    if(x<0 || (x%10==0 && x != 0))
    return false;
    long int reversed=0,original=x;
    while(x>0)
    {
        reversed=reversed*10 +(x%10);
        x=x/10;
    }
    return original == reversed;
}
