#ifndef _OFXSUBPROCESS_H
#define _OFXSUBPROCESS_H

#include "ofMain.h"

class ofxSubprocess {
  public:
    void setup(string _path, vector<string> _args) {
      path = _path;
      args = _args;
    }

    void setup(string _command) {
      // _command is the unprocessed full command-line
      vector<string> _all = ofSplitString(_command, " ");
      vector<string> _rest(_all.begin()+1, _all.end());
      setup(_all[0], _rest);
    }

    void forkexec();
    void wait();

    string path;
    vector<string> args;
    int pid;
    int status;

    long int started_at;
};

#endif
