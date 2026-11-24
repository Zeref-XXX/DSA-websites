class ProductOfNumbers {
    private:
    vector<int> prefix;
public:
   
    ProductOfNumbers() { 
        prefix={1};
     }

    void add(int num) {
        if(num==0||prefix.size()==0) prefix={1};
        else
            prefix.push_back(num*prefix[prefix.size()-1]);
        
    }

    int getProduct(int k) {
        if(k>=prefix.size()) return 0;
        return prefix[prefix.size()-1]/prefix[prefix.size()-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */