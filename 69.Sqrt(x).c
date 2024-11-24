int square_root(int x)
{
    int i,flag=0,a,b;
    for(i=0;i*i<=x;i++)
    {
        if(i*i==x)
        {
            flag=1;
            return i;
        }
    }
    i--;
    if(flag==0)
    {
       int a=x-(i*i);
       i++;
       int b=(i*i)-x;
       if(a<b)
       {
           return i-1;
       }
       else
       {
           return i;
       }
    }
}
