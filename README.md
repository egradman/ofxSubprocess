# Summary

This addon currently helps you easily fork and exec an external command.

It would sure be nice if this supported pipe or popen.  But it doesn't yet.  My TODO list for this addon is currently empty, because it does exactly what I needed it to do when I wrote it.

# Usage

  ofxSubprocess sp;

  string executable = "/usr/bin/yes";
  vector<string> args;
  args.push_back("no!");

  sp.setup(executable, args);
  sp.forkexec();


  
