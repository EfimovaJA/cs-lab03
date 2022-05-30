#include <iostream>
#include <vector>
#include "histogram.h"
#include "svg.h"

using namespace std;


int
main(int argc, char* argv[])
{
    curl_global_init(CURL_GLOBAL_ALL);
    Input input;
    bool hislo = false;
    if (argc > 1)
    {
        string url;
        for(int i=1; i<argc; i++)
        {
            if(strstr(argv[i], "-bins"))
            {
                if(!(strstr(argv[i+1], "0"))
                && !(strstr(argv[i+1], "1"))
                && !(strstr(argv[i+1], "2"))
                && !(strstr(argv[i+1], "3"))
                && !(strstr(argv[i+1], "4"))
                && !(strstr(argv[i+1], "5"))
                && !(strstr(argv[i+1], "6"))
                && !(strstr(argv[i+1], "7"))
                && !(strstr(argv[i+1], "8"))
                && !(strstr(argv[i+1], "9")))
                {
                    cerr << "Restart program and enter bin count" << endl;
                    return 0;

                }
                else
                {
                    hislo = true;

                }

            }
            if (strstr(argv[i], "http://"))
            {
                url = argv[i];
            }
        }
        input = download(url);
    }
    else
    {
        input = read_input(cin, true);
    }

    const auto bins = make_histogram(input);
    const auto proc = procent (input.numbers.size(), bins);
    show_histogram_svg(bins, proc);
}
