import numpy as np
from utils import Measures

from sklearn.linear_model import LinearRegression

data = np.array([[1, 1], [2, 2], [2, 3], [3, 3]])
labels = np.dot(data, np.array([1, 2])) + 3

model = LinearRegression().fit(data, labels)

# using my class
m = Measures(labels, data, model)
print("Total Sum of Squared Error: ", m.ss_total())
print("SS Residue: ", m.ss_residue())
print("R Squared: ", m.r_square())
print("MAD: ", m.mean_squared_deviation())

# using default sklearn
print("Score: {}".format(model.score(data, labels)))

# print("Weight: {}, Bias: {}".format(model.coef_[0], model.coef_[1]))

# print("Intercept: {}".format(model.intercept_))