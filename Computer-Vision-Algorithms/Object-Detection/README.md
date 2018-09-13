# Deep Learning based Object Detection using YOLOv3 with OpenCV (Python/C++)

## What is YOLOv3?

**YOLOv3** : latest variant of YOLO (You Only Look Once). 

**Authors** : Joseph Redmon, Ali Farhadi

Recognizes 80 different objects in images & videos.

**Features:**

1. Super fast
2. nearly accurate as SSD.

**OpenCV Version** : 3.4.2

## How does YOLO work?

**Object Detector** : Combination of Object Locator and Object Recognizer.

### Traditionally :

1. Sliding Window : Used to look objects at different locations & scales (expensive
   operations) - aspect ratio of object - usually assumed to be fixed.

2. R-CNN, Fast R-CNN : Used Selective Search - for - narrowing down number of
   bounding boxes that algo. had to test.

3. Overfeat : Involved - Scanning image - at multiple scales - using sliding
   windows like mechanisms done convolutionally. 

4. Faster R-CNN : Used - Region Proposal Network (RPN) - identifies bounding
   boxes. Saved lot of computation - used bounding boxes for recognizing
objects - for RPN (for proposing bounding boxes).

### YOLO

Forwards whole image - only once through the network. (SSD does the same as
well)

Difference b/w SSD and YOLO : YOLOv3 faster than SSD. (with comparable
accuracy)

**Process:**

1. Divide image to 13 x 13 grid of cells.
    1. Size of 169 cells : vary depending on size of input.
    2. Example: 416 x 416 I/P size - cell size = 32 x 32
    3. Each cell : responsible for predicting number of boxes in image.
2. For each bounding box, n/w predicts - confidence on bounding box enclosing
   an object (and object belonging to a class)
    1. Most bounding boxes - eliminated - as confidence low or lower than
       another box enclosing same box. (Technique called : non-maximum
suppression).

### YOLOv3 vs YOLOv2

1. YOLOv3 handles multiple scales better. 
2. Improved network by - making it bigger & adding shortcut connections (taking
   towards Residual Networks)

# Using OpenCV for YOLOv3 Implementation

Link : https://www.learnopencv.com/deep-learning-based-object-detection-using-yolov3-with-opencv-python-c/

