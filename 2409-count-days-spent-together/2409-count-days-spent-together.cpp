class Solution {
public:
    int countDaysTogether(string ara, string la, string arb, string lb) {
         vector<int> nd = {31,28,31,30,31,30,31,31,30,31,30,31};

    vector<int> ald(2), alm(2), bd(2), bm(2);

    alm[0] = stoi(ara.substr(0, 2));
    ald[0] = stoi(ara.substr(3, 2));

    alm[1] = stoi(la.substr(0, 2));
    ald[1] = stoi(la.substr(3, 2));

    bm[0] = stoi(arb.substr(0, 2));
    bd[0] = stoi(arb.substr(3, 2));

    bm[1] = stoi(lb.substr(0, 2));
    bd[1] = stoi(lb.substr(3, 2));

    auto convert = [&](int m, int d) {
        for (int i = 0; i < m - 1; i++) {
            d += nd[i];
        }
        return d;
    };

    int aStart = convert(alm[0], ald[0]);
    int aEnd   = convert(alm[1], ald[1]);
    int bStart = convert(bm[0], bd[0]);
    int bEnd   = convert(bm[1], bd[1]);

    int start = max(aStart, bStart);
    int end = min(aEnd, bEnd);

    return max(0, end - start + 1);
    }
};