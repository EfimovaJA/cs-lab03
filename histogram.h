#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <vector>
#include <iostream>
#include <curl/curl.h>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;

void find_minmax(const vector<double>& numbers, double& min, double& max);

struct Input
{
    vector<double> numbers;
    size_t bin_count;
};

vector<size_t> make_histogram(Input data);
void show_histogram_text(const vector<size_t>& bins);

vector<double> input_numbers(istream& in, size_t count);
Input read_input(istream& in, bool prompt);
vector <size_t> procent (size_t number_count, const vector <size_t>& bins);
size_t write_data(void* items, size_t item_size, size_t item_count, void* ctx);
Input download(const string& address);

#endif // HISTOGRAM_H_INCLUDED
