#ifndef _OFXSUBPROCESS_H
#define _OFXSUBPROCESS_H

#include "ofMain.h"

class ofxSubprocess {
  public:
    void setup(string _path, vector<string> _args) {
      path = _path;
      args = _args;
    }
    void forkexec();

    string path;
    vector<string> args;
    int pid;
};

#endif
