## Sorting algorithms


Sorting in c is the process of arranging elements either in ascending (or) descending order. 

The term sorting appeared when humans realized the importance of searching quickly.


Type of problem. The next samples establish arrays as banks of counters to illustrate another of their attributes. 
A C structure is introduced, defined, and sorted.

Array class’s built-in BinarySearch() and Sort() methods with simple data types such as
int, double, and string. 
The Sort() method accepts an array parameter and arranges its elements in descending order.

##### SORTING: Searching Linear search or sequential search Binary search Interpolation search to sorting External sorting


#### What is Sorting?

There are several types of sorting in data structures, namely – 
- bubble sort, 
- insertion sort, 
- selection sort,
- bucket sort, 
- heap sort, 
- quick sort,
- radix sort, etc.


The sort in c function in uses a simple inline data type like the one discussed in sorting in c, It refers to the items sorted only 
through its arguments and a few simple operations on the data.


What is sorting? Sorting in c is the process of arranging data into meaningful order so that you can analyze it more effectively.

--------------------------------------------------------------------------------------------------------

#### - Bubble sort
Sorting an array in C using the bubble method is simple; we simply step through the array in a for cycle, and within that cycle, we do another cycle; that is, we have two cycles.

In the second cycle (which goes from 0 to the length of the array minus the step of the first cycle) we compare the current element with the next one, and if the current one is larger, we exchange the values.

This is repeated and at the end the array will be sorted.


#### - Insertion sort 
Insertion sort is a very natural way of sorting for a human being, and can easily be used to sort a deck of arbitrarily numbered cards. It requires O(n²) operations to sort a list of n elements.

Initially you have a single element, which is obviously an ordered set. Then, when there are k elements sorted from smallest to largest, one takes the k+1 element and compares it with all the elements already sorted, stopping when a smaller element is found (all the larger elements have been shifted one position to the right) or when no elements are found (all the elements were shifted and this is the smallest). At this point the k+1 element is inserted and the other elements must be shifted.


![insertion sort](https://github.com/binbashz/holbertonschool-sorting_algorithms/assets/124454895/758f05d1-4336-4e83-85f0-810c4685ada6)



#### - Selection sort 
is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.

The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right.


This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n2), where n is the number of items.
![selection sort](https://github.com/binbashz/holbertonschool-sorting_algorithms/assets/124454895/04182a4f-835f-4a3b-9f22-1667f5784201)
