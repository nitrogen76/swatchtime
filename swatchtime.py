#!/usr/bin/python3

import time
epoch = time.time()
swatchtime = (((epoch + 3600) % 86400) * 1000) / 86400;
swatchround=round(swatchtime,3)
print (f"@{swatchround}")
