# convex-hull category
# @author: krshrimali

# task:
# 1. create a *shortest-possible* fence around the sheep
# 2. if only 1 sheep - then it's probably dying - no fence needed at all
# a library I'll always want to use

import numpy as np
# import cv2

class Point:
    def __init__(self, x, y, id_):
        self.x = x
        self.y = y
        self.id_ = id_
    def __str__(self):
        print("ID: {}, x: {}, y: {}".format(self.id_, self.x, self.y))

def orientation(p, q, r):
    '''
    reference: https://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
    '''
    print(p, q, r)
    val = (q[0] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    if(val == 0):
        return 0 # colinear
    if(val > 0):
        return 1 # clockwise
    else:
        return 2 # counter-clockwise

def convexHull(arr):
    '''
    Input: arr is an array of points
    Prop:  Graham Scan Algo
    '''
    len_arr = len(arr) # to check if < 3, quit 
    if(len_arr < 3):
        return -1

    hull = [] # store the hull points here
    
    # find leftmost point
    # based on the x-coord
    l = 0
    for i in range(1, len_arr):
        if(arr[i][0] < arr[l][0]):
            l = i
    
    pt = l
    print("point: ", pt)
    print("Length of array: ", len_arr) 
    
    while(True):
        hull.append(arr[pt]) # append left most point
        # then move counter clock wise
        next_point = (pt + 1) % len_arr # one move forward
        for i in range(0, len_arr):
            if(orientation(arr[pt], arr[i], arr[next_point]) == 2):
                print('orientation: ', orientation(arr[pt], arr[i], arr[next_point]))
                next_point = i
                print("NEXT POINT: ", next_point)
                break
        # set leftmost as q now
        pt = next_point
        if(pt == l):
            print('breaking')
            break
    
    return hull
# tests <= 100 
t = int(input("Test cases: "))

arr = []

# iterate through all test cases
for i in range(0, t):
    # number of sheeps - n
    n = int(input("Number of Sheeps: "))
    for i in range(n):
        xi, yi = input("Coords: ").split(" ")
        xi, yi = int(xi), int(yi)
        print('xi: {}, y: {}'.format(xi, yi))
        arr.append([xi, yi])

    print("Arr: ", arr)

    hull = convexHull(arr)

    # empty line
    # number of sheep <= 100000
    # x1, y1 - coords of sheep
    # ...
    # xn, yn
    print(hull)
