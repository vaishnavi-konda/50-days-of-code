# 100-days-of-code
100-days-of-code is a challenge where I set myself the goal to code atleast for an hour everyday for the next 100 days.
Iam learning Data Structures through C++ and Algorithms in the next 100 days


# ***ARRAYS***
### [Day-1](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-1)
        C++ program to reverse an array
        
        Example 1:
        Input  : array[] = {1, 2, 3}
        Output : array[] = {3, 2, 1}

        Example 2:
        Input :  array[] = {4, 5, 1, 2}
        Output : array[] = {2, 1, 5, 4}

### [Day-2](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-2) 
        C++ program to find the minimum and maximum elements in an array.
        
        Method 1 - By sorting the array 
        Method 2 - By Linear search

        Example:
        Input : array[] = {4, 5, 10, 25, 2, 3}
        Ouput : min = 2, max = 25
        
### [Day-3](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-3)
        C++ program to find the kth smallest element in an array.

        Example:
        Input : array[] = {7, 10, 4, 3, 20, 15}, k = 2
        Output : 7
        Explanation : k is 2, so 2nd smallest element is 7
        
### [Day-4](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-4)
        C++ program to sort the array of 0s, 1s, 2s in ascending order without using any sorting algorithm

        Given an array containing 0s, 1s, and 2s; you need to sort the array in ascending order.

        Example:
        Input : array[] = {2, 1, 1, 0, 0, 2, 0, 1}
        Output : array[] = {0, 0, 0, 1, 1, 1, 2, 2}

### [Day-5](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-5)
        C++ program to move all the negative numbers to the beginning of the array.

        An array contains both positive and negative numbers in random order.
        Rearrange the array elements so that all negative numbers appear before all positive numbers.

        Example:
        Input : 1, -5, -6, 10, 25, 33, -20
        Ouput : -20, -5, -6, 10, 25, 33, 1

        Note : Order of elements is not important here. 

### [Day-6](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-6)
        C++ program to fid the union and intersection of two sorted arrays.
        Given two sorted arrays, the task is to find their union and intersection.

        Example 1:
        Input : arr1[] = {1, 3, 4, 5, 7}
                arr2[] = {2, 3, 5, 6} 
        Output : Union : {1, 2, 3, 4, 5, 6, 7} 
                Intersection : {3, 5}
                
        Example 2:
        Input : arr1[] = {2, 5, 6}
                arr2[] = {4, 6, 8, 10} 
        Output : Union : {2, 4, 5, 6, 8, 10} 
                Intersection : {6}

### [Day-7](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-7)
        C++ program to cyclically rotate an array by one.

        Example 1:
        Input : array[] = {1, 2, 3, 4, 5}
        Output : array[] = {5, 1, 2, 3, 4}

        Example 2:
        Input : array[] = {9, 8, 7, 6, 4, 2, 1, 3}
        Output : array[] = {8, 7, 6, 4, 2, 1, 3, 9}

### [Day-8](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-8)
        Given an array arr[] denoting heights of N towers and a positive integer K.
        You have to modify the height of each tower either by increasing or decreasing them by K only once.
        After modifying, height should be a non-negative integer. 
        Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

        Example 1:
        Input: K = 2, N = 4, Arr[] = {1, 5, 8, 10}
        Output: 5
        Explanation: The array can be modified as {3, 3, 6, 8}.
        The difference between the largest and the smallest is 8-3 = 5.

        Example 2:
        Input: K = 3, N = 5, Arr[] = {3, 9, 12, 16, 20}
        Output: 11
        Explanation: The array can be modified as {6, 12, 9, 13, 17}.
        The difference between the largest and the smallest is 17-6 = 11.
