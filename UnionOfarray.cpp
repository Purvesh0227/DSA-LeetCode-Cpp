class Solution{

    public:
        void unionarray(vector<int> A, vector<int> B){
            set<int> s;
            for(int i : A) s.insert(i);
            for(int i : B) s.insert(i);

            return vector<int>(s.begin(), s.end());
        }
};