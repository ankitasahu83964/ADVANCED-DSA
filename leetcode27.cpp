class Solution {
public:
    int carFleet(int target,
                 vector<int>& position,
                 vector<int>& speed) {

        vector<pair<int,double>> cars;

        for(int i=0;i<position.size();i++) {

            cars.push_back({
                position[i],
                (double)(target-position[i])/speed[i]
            });
        }

        sort(cars.begin(), cars.end());

        int fleet = 0;
        double lastTime = 0;

        for(int i=cars.size()-1;i>=0;i--) {

            if(cars[i].second > lastTime) {

                fleet++;
                lastTime = cars[i].second;
            }
        }

        return fleet;
    }
};
