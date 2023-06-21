// 1281. Subtract the Product and Sum of Digits of an Integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while (n!=0)
        {
            int digit=n%10;  //234=234%10=4,23%10=3,2%10=2
            prod=prod*digit; //prod=1*4,prod=1*3,prod=1*2=prod=4*3*2=24
            sum=sum+digit;   //sum=0+4,sum=4+3=7,sum=7+2=9
            n=n/10;          //234/10=23,23/10=2
        }
        int ans=(prod-sum);  //(Prod-sum)=(24-9)=15;
        return ans;          //output=15
    }
};