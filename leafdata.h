#ifndef LEAFDATA_H
#define LEAFDATA_H

#include <vector>
using namespace std;

class LeafData {
public:
    LeafData(int mCount=0, int mFwdCount = 0, int mRevCount=0, bool mHasIndel=false, bool mIsTrash=false): mCount(mCount),mFwdCount(mFwdCount), mRevCount(mRevCount), mHasIndel(mHasIndel), mIsTrash(mIsTrash){};
    int count();
    int fwdCount();
    int revCount();
    void setCount();
    void setFwdCount();
    void setRevCount();
    vector <int> substitutions();
    void appendSubstitution(int substitution);
    void replaceSubstitutions(vector<int>substitutions);
    bool hasIndel();
    pair <int, int> indel();
    void setIndel(pair<int, int>posLength);
    bool isTrash();
    void makeTrash();
    bool hasVariant();

private:
    int mCount;
    int mFwdCount;
    int mRevCount;
    vector <int> mSubstitutions;
    bool mHasIndel;
    pair <int, int> mIndel;
    bool mIsTrash;
};
#endif
