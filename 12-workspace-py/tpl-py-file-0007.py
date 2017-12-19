#!/usr/bin/env python

####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
# The text is written to a timestamped file.
#
####################################

import time
import random
from random import randrange

fp=open(time.strftime('00_%Y%m%d_%H%M%S.txt'), 'w')
fp.write('####################################\n')
fp.write('#\n')
fp.write('# -- TEXTPATGEN GENERATED FILE --\n')
fp.write('#\n')
fp.write('# -- Created from a Python script.\n')
fp.write('#\n')
fp.write(time.strftime('# -- %Y-%m-%dT%H:%M:%S%z\n'))
fp.write('#\n')
fp.write("####################################\n")
random.seed(100)
for length in range(0, 10):
  for width in range(0, 9):
    num=randrange(0, 9999)
    fp.write('D-%04d ' % num)
    width=width+1
    length=length+1
  num=randrange(0, 9999)
  fp.write('D-%04d\n' % num)
fp.write('# -- End of file.\n');
fp.close()
