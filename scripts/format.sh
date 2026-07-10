#/usr/bin/bash

find . -path "./third_party" -prune -o -regex '.*\.\(cpp\|h\|hpp\)' -exec clang-format -i {} \;
