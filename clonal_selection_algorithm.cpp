#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
#include <queue>
#include <chrono>
#include <bitset>

/*
 ABOUT
 
 WHAT IS CLONAL SELECTION? Clonal selection is the process by which antigen
 specific lymphocytes (B and T cells) of the vertebrate immune system are
 selected. Originally, by recombination, many lymphocytes with many different
 types of antigen receptors are created. When a lymphocyte comes into contact with
 an antigen, it begins to proliferate, creating effector cells that secrete the
 receptors as antibody and memory cells that "save" the receptor in case of
 second exposure.
 
 In B cells, but not T cells, the receptor/antibody has a higher affinity for the
 antigen after first exposure. This is why the humoral response is so important
 during second exposure.
 
 The clonal selection theory is credited to Frank Burnet.
 
 Pseudocode adapted from artificial-immune-systems.org
 */

using namespace std;

int a; int n;
vector<int> A;
vector<int> cells;
vecotr<int> diff;

//Creates a randomly generated set of antibodies A of size a
//Initializes cells
void init() {
    cin >> a >> n;
    A.resize(a);
    for (int i=0; i<a; i++) {
        A[i] = rand();
    }
    for (int i=0; i<cells.max_size(); i++) {
        cells.push_back(i);
    }
}

//
void comp() {
    for (int n: cells) {
        for (int anti: A) {
            diff.push_back(anti-n);
        }
    }
}

void clonalg() {
    init();
    comp();
}

int main() {
    clonalg();
}
