#include "histogram.h"
#include <cassert>

void test_positive()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}
void test_negative()
{
    double min = 0;
    double max = -9999;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}

void test_simular()
{
    double min = 0;
    double max = 0;
    find_minmax({3, 3, 3}, min, max);
    assert(min == 3);
    assert(max == 3);
}

void test_one()
{
    double min = 0;
    double max = 0;
    find_minmax({1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void test_null()
{
    double min = 0;
    double max = 0;
    find_minmax({}, min, max);
    assert(min == 0);
    assert(max == 0);
}



void test_numbers()
{
    vector <size_t> data = {10, 30, 60};
	vector <size_t> input_data = { 1, 3, 6 };
    vector <size_t> arr = procent(10,{input_data });
    assert(data == arr);
    return;
}

void test_numbers2()
{
    vector <size_t> data = {100};
    vector <size_t> input_data = { 1 };

    vector <size_t> arr = procent (1, {input_data});
    assert(data == arr);
    return;
}
void test_numbers3()
{
	vector <size_t> data = {0};
    vector <size_t> input_data = { 0 };

    vector <size_t> arr = procent (1, {input_data});
    assert(data == arr);
    return;
}

void test_numbers4()
{
	vector <size_t> data = { };
    vector <size_t> input_data = { };

    vector <size_t> arr = procent (0, {input_data});
    assert(data == arr);
    return;
}

int main()
{
    test_positive();
    test_negative();
    test_simular();
    test_one();
    test_null();
	test_numbers();
	test_numbers2();
	test_numbers3() ;
	test_numbers4 () ;
}


