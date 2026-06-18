class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minutes_degree=6*minutes;
        double hour_degree=30*hour+.5*minutes;

        double diff=abs(minutes_degree-hour_degree);

        return min(diff,360-diff);
    }
};