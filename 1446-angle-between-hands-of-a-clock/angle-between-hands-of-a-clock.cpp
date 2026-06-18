class Solution {
public:
    double angleClock(int hour, int minutes) {
        double temp= abs(30*hour - 5.5*minutes);

        return min(temp,360-temp);
    }
};