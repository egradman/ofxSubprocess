#include "ofxSubprocess.h"

void ofxSubprocess::forkexec()
{
  char *path_char;
  //path_char = new char[ path.size() + 1 ];
  //strcpy( path_char, path.c_str() );

  char **args_array = new char*[args.size() + 2];
  
  args_array[0] = (char *)path.c_str(); // the first arg is the path!
  for (int i=0; i<args.size(); i++) {
    args_array[i+1] = (char *)args[i].c_str();
  }
  args_array[args.size()+1] = NULL;
  
  pid = fork();
  
  ofLog() << "forked " << path << " with pid " << pid;
  
  switch (pid) {
    case -1 :
      ofLog() << "fork() failed";
    case 0 :
      execv(path.c_str(), args_array);
    default :
      return;
  }
}
