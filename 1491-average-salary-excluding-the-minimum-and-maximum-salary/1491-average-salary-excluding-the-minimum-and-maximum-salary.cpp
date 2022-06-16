class Solution {
public:
    double average(vector<int>& salary) 
    {
        int max = *max_element(salary.begin(), salary.end());
        int min = *min_element(salary.begin(), salary.end());
        int count = 0;
        double sum = 0;
        double avg;
        
        for(int i=0; i<salary.size(); i++)
        {
            if(salary[i] != max && salary[i] != min)
            {
                sum += salary[i];
                count++;
            }
        }
        avg = sum / count;
        return avg;
    }
};