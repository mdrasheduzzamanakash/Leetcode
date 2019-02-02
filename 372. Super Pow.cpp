class Solution {
public:
    const int base = 1337;
    
    int getPow(int a,int value){
        if(a > 1337)
        a = a % base;
        int rem = 1;
        for(int i = 0;i < value;i++){
            rem = (rem * a) % base;
        }
        return rem;
    }
    
    
    int superPow(int a, vector<int>& b) {
        
        if(!b.size()) return 1;
        int ld = b.back();
        b.pop_back();
        
        return getPow(a,ld) * getPow(superPow(a,b),10) % base;
    }
};