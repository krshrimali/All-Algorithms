import numpy as np
import matplotlib.pyplot as plt

from skimage.segmentation import random_walker
from skimage.data import binary_blobs
from skimage.exposure import rescale_intensity
import skimage

# noisy synthetic data generation
# seeds
data  = skimage.img_as_float(binary_blobs(length=128, seed=1))
sigma = 0.35
data += np.random.normal(loc=0, scale=sigma, size=data.shape)
# rescale intensity range from -sigma, 1+sigma to -1, 1
data  = rescale_intensity(data, in_range=(-sigma, 1+sigma), out_range=(-1, 1))

# choose hottest and coldest pixels as markers
markers = np.zeros(data.shape, dtype=np.uint)
markers[data < -0.95] = 1 # if data < -0.95 then 1
markers[data > 0.95] = 2 # if data  > 0.95 then 2

# prob = exp(-beta(zp - zq)): zp and zq are two charged particles (nodes)
# random_walker is solved like for an electron
# prob is like conductange - lesser it is, harder it is to iterate that path
labels = random_walker(data, markers, beta=10, mode='bf')

# plot results

fig, (ax1, ax2, ax3) = plt.subplots(1, 3, figsize=(8, 3.2), sharex=True, \
        sharey=True)

ax1.imshow(data, cmap='gray', interpolation='nearest')
ax1.axis('off')
ax1.set_title('Noisy Data')

ax2.imshow(markers, cmap='magma', interpolation='nearest')
ax2.axis('off')
ax2.set_title('Markers')

ax3.imshow(labels, cmap='gray', interpolation='nearest')
ax3.axis('off')
ax3.set_title('Segmentation')

fig.tight_layout()
plt.show()
