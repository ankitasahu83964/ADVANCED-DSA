class solution{
public:
    int n=254;
    int product=1;
    int sum=0;
    
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;

    }
    int answer=product-sum;
    //cout<<"answer"
    return answer;
    
}
    
