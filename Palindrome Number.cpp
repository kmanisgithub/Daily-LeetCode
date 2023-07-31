class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return 1;
        }
        if(x<0 || x%10==0){
            return 0;
        }
        //int temp=x;
        int rev=0;
        while(x>rev){
            int ld=x%10;
            x/=10;
            rev=(rev*10)+ld;
        }
        if(x==rev || x==rev/10){
            return 1;
        }else{
            return 0;
        }
    }
};
