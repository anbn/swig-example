#include <vector>
#include "code.h"

using namespace std;

vector<double> mean(vector< vector<double> > mat) {
    vector <double> averages; 
    for (int r=0; r<mat.size(); r++) {
        double rsum = 0.0;
        double ncols= mat[r].size();
        for (int c = 0; c< mat[r].size(); c++) {
            rsum += mat[r][c];
        }
        averages.push_back(rsum/ncols);    
    }
    return averages;
}
