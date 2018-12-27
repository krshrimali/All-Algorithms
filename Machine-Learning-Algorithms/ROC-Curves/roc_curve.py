from sklearn.datasets import make_classification
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import roc_curve
from sklearn.metrics import roc_auc_score
from matplotlib import pyplot

# generate a sample dataset (binary - 2 classes)
X, y = make_classification(n_samples = 1000, n_classes = 2, weights = [1, 1], \
        random_state = 2)

# split into train and test 
trainX, testX, trainy, testy = train_test_split(X, y, test_size = 0.5, \
        random_state = 2)

# fit a model
model = KNeighborsClassifier(n_neighbors = 3)

model.fit(trainX, trainy)

probs = model.predict_proba(testX)

probs = probs[:, 1]
auc = roc_auc_score(testy, probs)

print('auc: ', auc)

fpr, tpr, thresholds = roc_curve(testy, probs)

# plot no skill
pyplot.plot([0, 1], [0, 1], linestyle = '--')

# plot roc curve for the model
pyplot.plot(fpr, tpr, marker='.')

pyplot.show()
