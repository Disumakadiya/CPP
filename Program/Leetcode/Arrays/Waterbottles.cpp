class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int b=numBottles;//total and b=empty 
        while(b>=numExchange)
        {
            int newbottle=b/numExchange;
            total=total+newbottle;
            b=b%numExchange+newbottle;
        }
        return total;
    }
};