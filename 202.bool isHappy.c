bool isHappy(int n) {
     while(n!=1 && n!=4){
     int rem=0;
     while(n!=0){
        int r=n%10;
         rem=rem+(r*r);
        n=n/10;
     }
     n=rem;
     } 
if(n==1){
    return 1;
}
else{
    return 0;
}
}
