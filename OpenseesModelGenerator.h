#ifndef OPENSEESMODELGENERATOR_H
#define OPENSEESMODELGENERATOR_H

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Steel.h"
#include "Steel02.h"
#include "ReinforcingSteel.h"

using namespace std;

class OpenseesModelGenerator
{
public:

    struct Bound{
        double min=0.0;
        double max=0.0;
    };

    OpenseesModelGenerator(
        int seed=0,
        string randPath="randPara.txt",
        string framePath="model/frame.tcl",
        string nodePath="model/node.tcl",
        string elementPath="model/element.tcl"
    );

    void ReadRandPara();
    void GenRandPara();
    double random(double min=0.0, double max=0.1);

    void WriteModel();
    void WriteMain();
    void WriteSteel();
    void WriteConcrete();
    void WriteSection();

    vector<Steel *> steel;


private:
    int _seed;
    string _randPath;
    string _framePath;
    string _nodePath;
    string _elementPath;

    map<string,Bound> _randParas;

};

#endif // OPENSEESMODELGENERATOR_H
