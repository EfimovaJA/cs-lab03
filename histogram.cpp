#include "histogram.h"

void find_minmax(const vector<double> numbers, double& min, double& max)
{
    if(numbers.size() == 0)
    {
        return;
    }
    else {
	min = numbers[0];
    max = numbers[0];
    for(double number: numbers)
    {
        if(min > number)
        {
            min = number;
        }
        if (max < number)
        {
            max = number;
        }
    }
   } // (здесь код поиска минимума и максимума)
}

vector <size_t> procent (size_t number_count, const vector <size_t>& bins)
{
    vector <size_t> x (bins.size());
    for ( size_t i=0; i< bins.size(); i++)
    {
        x[i] = static_cast<double> (bins[i]) / number_count * 100;
    }
    return x;
}
