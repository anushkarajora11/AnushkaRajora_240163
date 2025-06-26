class Solution {
public:
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            if (num % 2 == 1) count++;
            num = num / 2;
        }
        return count;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;

        for (int hour = 0; hour < 12; ++hour) {
            for (int minute = 0; minute < 60; ++minute) {
                int bitsOn = countSetBits(hour) + countSetBits(minute);
                if (bitsOn == turnedOn) {
                    string time = to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute);
                    result.push_back(time);
                }
            }
        }

        return result;
    }
};
