int romanToInt(char* s) {
    int i=0,a[strlen(s)];
	while(s[i]!='\0')
	{
		switch(s[i])
		{
			case 'I':
				a[i]=1;
				break;
				
				case 'V':
				a[i]=5;
				break;
				
					case 'X':
				a[i]=10;
				break;
				
					case 'L':
				a[i]=50;
				break;
				
					case 'C':
				a[i]=100;
				break;
				
					case 'D':
				a[i]=500;
				break;
				
					case 'M':
				a[i]=1000;
				break;
				
		}
	i++;}
	
	int k=0;
	for(int i=0;i<strlen(s);i++)
	{
	if(a[i]>=a[i+1])
	{
		k=a[i]+k;
	}
	else
	{
		k=k+a[i+1]-a[i];
		i++;
	}
	}
	return k;
}
