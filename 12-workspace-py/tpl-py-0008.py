#!/usr/bin/env python

####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
####################################

import sys
import random
from random import randrange

sys.stdout.write('####################################\n')
sys.stdout.write('#\n')
sys.stdout.write('# -- TEXTPATGEN GENERATED FILE --\n')
sys.stdout.write('#\n')
sys.stdout.write('# -- Created from a Python script.\n')
sys.stdout.write('#\n')
sys.stdout.write("####################################\n")
random.seed(100)
for length in range(0, 10):
  for width in range(0, 9):
    num=randrange(0, 65535)
    sys.stdout.write('D-%05d ' % num)
    width=width+1
    length=length+1
  num=randrange(0, 65535)
  sys.stdout.write('D-%05d\n' % num)
sys.stdout.write('# -- End of file.\n');
sys.stdout.flush()
