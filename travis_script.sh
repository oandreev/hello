#/bin/bash
if [ "$CXX" = "g++" ]; then 
  gcc -v 
elif [ "$CXX" = "clang" ]; then 
  clang -v 
fi
