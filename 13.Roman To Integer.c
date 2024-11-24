int romanToInt(char* s)
{
    int tot=0,current,next;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        switch(s[i])
        {
            case 'I':
              current=1;
              break;
            case 'V':
               current=5;
               break;
            case 'X':
               current=10;
               break;
            case 'L':
               current=50;
               break;
            case 'C':
               current=100;
               break;
            case 'D':
               current=500;
               break;
            case 'M':
               current=1000;
               break;
            default:
                current=0;
                break;                   
        }
        if(i+1<len)
        {
            switch(s[i+1])
            {
            case 'I':
              next=1;
              break;
            case 'V':
               next=5;
               break;
            case 'X':
               next=10;
               break;
            case 'L':
               next=50;
               break;
            case 'C':
               next=100;
               break;
            case 'D':
               next=500;
               break;
            case 'M':
               next=1000;
               break;
            default:
                next=0;
                break;  
            }
            if(current < next)
            {
                tot -= current;
            }
            else
            {
                tot += current;
            }
        }
        else
        {
            tot += current;
        }
    }
   return tot;
}
