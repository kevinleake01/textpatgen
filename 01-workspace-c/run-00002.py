#!/usr/bin/env python
# -------------------------------------------------
#
# This program will execute:
#
# tpl-decgen-0001.c 0 99 10
#
# -------------------------------------------------

import subprocess;

subprocess.call(["gcc", "tpl-decgen-0001.c"]);
subprocess.call(["./a.out", "0", "99", "10"]);
subprocess.call(["rm", "a.out"]);

