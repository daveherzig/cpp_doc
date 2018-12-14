class FoodItem
{
    private:
    string name;
    int weight;
    int nutritionalValue;

    public:
    // Implementieren Sie passende Getter und Setter Methoden
};

class KnapsackUtil
{
    static vector<FoodItem> solveProblem(vector<FoodItem>& foodlist, 
                                         int payloadLimit);
};