import numpy as np

class Measures:
    def __init__(self, y, x, model):
        self.y_predict = model.predict(x)
        self.y = y
        self.errors = (self.y - self.y_predict)

    def ss_total(self):
        # sum of squared errors using baseline model (mean model)    
        return np.sum((self.y - np.mean(self.y))**2)

    def ss_residue(self):
        # sum of squared errors using predicted model
        return np.sum((self.y - self.y_predict)**2)

    def r_square(self):
        # @brief 
        # Can R2 < 0 ? https://stats.stackexchange.com/questions/12900/when-is-r-squared-negative
        # not very robust to outliers
        return (1 - self.ss_residue()/self.ss_total())

    def mean_squared_deviation(self):
        # MAD = median(|ei - median(ei)|)
        # median of absolute error of deviations from median of errors
        # all that is required is errors
        # robust to outliers
        return np.median(np.abs(self.errors - np.median(self.errors)))