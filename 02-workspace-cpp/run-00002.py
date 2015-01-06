#!/usr/bin/env python
# -------------------------------------------------
#
# This program will execute:
#
# tpl-decgen-0001.cpp 0 99 10
#
# -------------------------------------------------

import subprocess;

subprocess.call(["g++", "tpl-decgen-0001.cpp"]);
subprocess.call(["./a.out", "0", "99", "10"]);
subprocess.call(["rm", "a.out"]);

