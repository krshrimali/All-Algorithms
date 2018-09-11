# "how to score probability predictions in python?"
# @author: kushashwa ravi shrimali
# reference: https://machinelearningmastery.com/how-to-score-probability-predictions-in-python/

from sklearn.metrics import log_loss
import matplotlib.pyplot as plt
import numpy as np

class Scores:
    """
    Class to calculate evaluation score (loss function)
    """
    def __doc__(self):
        print("""
        Usage: sc = Scores(index)

        Args: index - 0 to  3
        0: Log Loss Score
        1: Brier Score
        2: ROC AUC Score
        3: Tuning Predicted Probabilities        
        """)

    def __init__(self, score):
        self.score = score

    def log_loss(self):
        """
        Logistic Loss/Logarithmic Loss/Cross Entropy Loss
        Used to measure/evaluate predicted classes/labels.

        Penalizes each predicted value based on the distance from actual score.
        Penalty score varies from 0.0 to 1.0 for normalized data (0 to 1)
        """
        # predictions array
        # 0 to 1 in 0.1 increments
        ypred = [x*0.1 for x in range(0, 1)]
        # evaluate preds for 0 true value
        loss_0 = [log_loss([0], [x], labels=[0, 1]) for x in ypred]
        # evaluate predictions for 1 true value
        loss_1 = [log_loss([1], [x], labels=[0, 1]) for x in ypred]

        # plot input
        plt.plot(ypred, loss_1, label='true 0')
        plt.plot(ypred, loss_2, label='true 1')
        plt.show()
    
    def brier_score(self):
        pass
    
    def roc_auc_score(self):
        pass
    
    def tuning_predicted_prob(self):
        pass
    
    def compute(self):
        """
        Compute loss function. 
        Args: null
        """
        if(self.score == 0):
            log_loss()
        elif(self.score == 1):
            brier_score()
        elif(self.score == 2):
            roc_auc_score()
        elif(self.score == 3):
            tuning_predicted_prob()
