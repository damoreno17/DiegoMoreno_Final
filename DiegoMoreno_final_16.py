import numpy as np
import matplotlib.pylab as plt

x = np.arange (0,101, 1)
y= np.arange (0, 202, 1)


bx1 = x[5] , y[101]
bx2 = x[11] , y[6]
bx3 = x[12] , y[81]
bx4 = x[81] , y[51]
bx5 = x[51] , y[51]
bx6 = x[41] , y[201]

plt.plot (bx1)
plt.plot (bx2)
plt.plot (bx3)
plt.plot (bx4)
plt.plot (bx5)
plt.plot (bx6)

plt.show()
