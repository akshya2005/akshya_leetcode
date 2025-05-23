class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
          vector<int> populationChanges(2051, 0);  
        for (const auto& log : logs) {
            int birth = log[0], death = log[1];
            populationChanges[birth - 1950]++;  
            populationChanges[death - 1950]--;  
        }
        int maxPopulation = 0;
        int earliestYear = 1950;
        int currentPopulation = 0;
for (int year = 0; year <= 100; ++year) {
currentPopulation += populationChanges[year];
if (currentPopulation > maxPopulation) {
                maxPopulation = currentPopulation;
                earliestYear = year + 1950;  
            }
        }

        return earliestYear;
    }
};

