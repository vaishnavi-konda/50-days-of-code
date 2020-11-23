# 100-days-of-code
100-days-of-code is a challenge where I set myself the goal to code atleast for an hour everyday for the next 100 days.
Iam learning Data Structures through C++ and Algorithms in the next 100 days


# ***TOPIC - ARRAYS***
### [Day-1](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-1) 
### Reverse an array

        C++ program to reverse an array
        
        Example 1:
                Input  : array[] = {1, 2, 3}
                Output : array[] = {3, 2, 1}

        Example 2:
                Input :  array[] = {4, 5, 1, 2}
                Output : array[] = {2, 1, 5, 4}

### [Day-2](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-2) 
### Minimum and maximum in an array

        C++ program to find the minimum and maximum elements in an array.
        
        Method 1 - By sorting the array 
        Method 2 - By Linear search

        Example:
                Input : array[] = {4, 5, 10, 25, 2, 3}
                Ouput : min = 2, max = 25
        
### [Day-3](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-3)
### kth smallest element in an array

        C++ program to find the kth smallest element in an array.

        Example:
                Input : array[] = {7, 10, 4, 3, 20, 15}, k = 2
                Output : 7
                Explanation : k is 2, so 2nd smallest element is 7
        
### [Day-4](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-4)
### Sort an array of 0s,1s, 2s

        C++ program to sort the array of 0s, 1s, 2s in ascending order without using any sorting algorithm

        Given an array containing 0s, 1s, and 2s; you need to sort the array in ascending order.

        Example:
                Input : array[] = {2, 1, 1, 0, 0, 2, 0, 1}
                Output : array[] = {0, 0, 0, 1, 1, 1, 2, 2}

### [Day-5](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-5)
### Move all negatives to one side of array

        C++ program to move all the negative numbers to the beginning of the array.

        An array contains both positive and negative numbers in random order.
        Rearrange the array elements so that all negative numbers appear before all positive numbers.

        Example:
                Input : 1, -5, -6, 10, 25, 33, -20
                Ouput : -20, -5, -6, 10, 25, 33, 1

        Note : Order of elements is not important here. 

### [Day-6](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-6)
### Union and intersection af arrays

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
### Rotate an array

        C++ program to cyclically rotate an array by one.

        Example 1:
                Input : array[] = {1, 2, 3, 4, 5}
                Output : array[] = {5, 1, 2, 3, 4}

        Example 2:
                Input : array[] = {9, 8, 7, 6, 4, 2, 1, 3}
                Output : array[] = {8, 7, 6, 4, 2, 1, 3, 9}

### [Day-8](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-8)
### Minimize the difference between heights

        C++ program to minimize the difference between longest and shortest heights of a tower.
        
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

### [Day-9](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-9)
### Find duplicate in an array
        C++ program to find the duplicate element in an array.

        Given an array of size n + 1, which contains n distinct elements and 1 element is repeated.
        The task is to find out the repeated element.

        Example 1:
                Input : array[] = {2, 1, 3, 6, 1}
                Output : 1

        Example 2:
                Input : array[] = {9, 5, 8, 3, 5, 1, 2}
                Output : 5

### [Day-10](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-10)
### Merge two sorted arrays

        C++ program to merge two sorted arrays into one sorted array.

        Given two sorted arrays array1[], array2[] of size1, size2.
        Each array is sorted in non-decreasing order.
        Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

        Example 1:

                Input:   size1 = 4, size2 = 5
                        array1[] = {1, 3, 5, 7}
                        array2[] = {0, 2, 6, 8, 9}

                Output: 0 1 2 3 5 6 7 8 9

                Explanation: Since you can't use any extra space, modify the given arrays to form 
                        array1[] = {0, 1, 2, 3}
                        array2[] = {5, 6, 7, 8, 9}

        Example 2:

                Input:  size1 = 2, size2 = 3
                        array1[] = {10, 12}
                        array2[] = {5, 18, 20}

                Output: 5 10 12 18 20

                Explanation: Since you can't use any extra space, modify the given arrays to form 
                        array1[] = {5, 10}
                        array2[] = {12, 18, 20}

### [Day-11](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-11)
### Merge overlapping intervals

        C++ program to merge the overlapping intervals.

        Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
        and return an array of the non-overlapping intervals that cover all the intervals in the input.

        Example 1:

                Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
                Output: [[1,6],[8,10],[15,18]]
                Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

        Example 2:

                Input: intervals = [[1,4],[4,5]]
                Output: [[1,5]]
                Explanation: Intervals [1,4] and [4,5] are considered overlapping.

### [Day-12](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-12)
### Buy and sell stock

        Say you have an array for which the ith element is the price of a given stock on day i.
        If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
        Note that you cannot sell a stock before you buy one.

        Example 1:

                Input: [7,1,5,3,6,4]
                Output: 5
                Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
                                Not 7-1 = 6, as selling price needs to be larger than buying price.
        Example 2:

                Input: [7,6,4,3,1]
                Output: 0
                Explanation: In this case, no transaction is done, i.e. max profit = 0.

### [Day-13](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-13)
### KADANE'S ALGORITHM

        C++ program to find the contiguous sub-array with maximum sum.

        Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

        Example 1:

                Input : N = 5
                        arr[] = {1,2,3,-2,5}
                Output: 9
                Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.

        Example 2:

                Input : N = 4
                        arr[] = {-1,-2,-3,-4}
                Output: -1
                Explanation: Max subarray sum is -1 of element (-1)

### [Day-14](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-14)
### Common elements in 3 arrays

        C++ program to find the common elements in 3 sorted arrays.

        Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
        Note: Try to take care of the duplicates without using any additional Data Structure.

        Example 1:

                Input:  size1 = 6; array1 = {1, 5, 10, 20, 40, 80}
                        size2 = 5; array2 = {6, 7, 20, 80, 100}
                        size3 = 8; array3 = {3, 4, 15, 20, 30, 70, 80, 120}
                Output: 20 80
                Explanation: 20 and 80 are the only common elements in array1, array2, array3.

        Example 2:

                Input:  size1 = 3; array1 = {3, 3, 3}
                        size2 = 3; array2 = {3, 3, 3}
                        size3 = 3; array3 = {3, 3, 3}
                Output: 3
                Explanation: 3 is the only common element in array1, array2, array3.

### [Day-15](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-15)
### Finding the longest consecutive subsequence

        C++ program to find the longest consecutive subsequence.

        Given an array of positive integers.
        Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

        Example 1:

                Input:  size = 7
                        array[] = {2,6,1,9,4,5,3}
                Output: 6
                Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. 
                These 6 numbers form the longest consecutive subsquence.

        Example 2:

                Input:  size = 7
                        array[] = {1,9,3,10,4,20,2}
                Output: 4
                Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.

### [Day-16](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-16)
### Inversion count

        C++ program to find the count of inversions in an array.

        Given an array of integers. Find the Inversion Count in the array. 

        Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
        If array is already sorted then the inversion count is 0. 
        If an array is sorted in the reverse order then the inversion count is the maximum. 
        Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
        
        Example 1:

                Input: N = 5, arr[] = {2, 4, 1, 3, 5}
                Output: 3
                Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

        Example 2:

                Input: N = 5, arr[] = {2, 3, 4, 5, 6}
                Output: 0
                Explanation: As the sequence is already sorted so there is no inversion count.

        Example 3:

                Input: N = 3, arr[] = {10, 10, 10}
                Output: 0
                Explanation: As all the elements of array are same, so there is no inversion count.

### [Day-17](https://github.com/vaishnavi-konda/100-days-of-code/tree/main/Day-17)
### Chocolate distribution problem
        C++ program to solve chocolate distribution problem.

        Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. 
        Each packet can have variable number of chocolates. 
        There are M students, the task is to distribute chocolate packets such that :
        1. Each student gets one packet.
        2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

        Example 1:
        
                Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
                Output: Minimum Difference is 2 
                Explanation:
                We have seven packets of chocolates and we need to pick three packets for 3 students 
                If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

        Example 2:

                Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
                Output: Minimum Difference is 6 
                Explanation:
                The set goes like 3,4,7,9,9 and the output is 9-3 = 6

        Example 3:

                Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
                Output: Minimum Difference is 10 
                Explanation:
                We need to pick 7 packets. 
                We pick 40, 41, 42, 44, 48, 43 and 50 to minimize difference between maximum and minimum. 


        Approach : 
        We first sort the array arr[0..n-1], then find the subarray of size m with the minimum difference between the last and first elements.