class Solution {
public:
    bool isPerfectSquare(int num) {
      
    int start=0;
    int end=num;

  
       while(start<=end){
          long long int mid=(start+end)/2;
        long long int center=mid*mid;
        if(center==num){
          return true;
        }
        else if(center>num){
            end=mid-1;

        }
        else{
            start=mid +1;
        }

        



       } 
        return false;
    }
};