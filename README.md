1.	Suppose that we are given a stack of n elements which we would like to sort, by
returning a stack containing the records in sorted order (with the smallest value on
top). We are allowed to use only the following operations to manipulate the data:
Pop-Push(s1,s2) { pop the top item from stack s1 and push it onto stack s2.
 Compare(s1,s2) { test whether the top element of stack s1 is less than the top
element of stack s2.
(a) Give a (n2) sorting algorithm using just these operations and three stacks.
(b) Give an initial stack which cannot be sorted just using these operations and two
stacks.
(c) Give a (n2) sorting algorithm using just these operations and two stacks, where
you are allowed to temporarily park elements in a constant number of additional
registers. (hint: use insertion sort)

2. In the bin-packing problem, we are given n metal objects, each weighing between
zero and one kilogram. Our goal is to find the smallest number of bins that will
hold the n objects, with each bin holding one kilogram at most.
• The best-fit heuristic for bin packing is as follows. Consider the objects in the
order in which they are given. For each object, place it into the partially filled
bin with the smallest amount of extra room after the object is inserted.. If
no such bin exists, start a new bin. Design an algorithm that implements the
best-fit heuristic (taking as input the n weights w1, w2, ...,wn and outputting
the number of bins used) in O(n log n) time.
• Repeat the above using the worst-fit heuristic, where we put the next object in
the partially filled bin with the largest amount of extra room after the object
is inserted.

3.Suppose that we are given a sequence of n values x1, x2, ..., xn and seek to
quickly answer repeated queries of the form: given i and j, find the smallest value
in xi, . . . , xj .
(a) Design a data structure that uses O(n2) space and answers queries in O(1)
time.
(b) Design a data structure that uses O(n) space and answers queries in O(log n)
time. For partial credit, your data structure can use O(n log n) space and have
O(log n) query time.

4.Suppose you are given an input set S of n numbers, and a black box that if
given any sequence of real numbers and an integer k instantly and correctly answers
whether there is a subset of input sequence whose sum is exactly k. Show how to
use the black box O(n) times to find a subset of S that adds up to k.

5. Let A[1..n] be an array of real numbers. Design an algorithm to perform any
sequence of the following operations:
• Add(i,y) – Add the value y to the ith number.
• Partial-sum(i) – Return the sum of the first i numbers, i.e.  i
j=1 A[j].
There are no insertions or deletions; the only change is to the values of the numbers.
Each operation should take O(log n) steps. You may use one additional array of size
n as a work space.

6.Extend the data structure of the previous problem to support insertions and
deletions. Each element now has both a key and a value. An element is accessed
by its key. The addition operation is applied to the values, but the elements are
accessed by its key. The Partial sum operation is different.
• Add(k,y) – Add the value y to the item with key k.
• Insert(k,y) – Insert a new item with key k and value y.
• Delete(k) – Delete the item with key k.
Partial-sum(k) – Return the sum of all the elements currently in the set whose
key is less than y, i.e.  xj<y xi.
The worst case running time should still be O(n log n) for any sequence of O(n)
operations.

7. Design a data structure that allows one to search, insert, and delete an integer
X in O(1) time (i.e. , constant time, independent of the total number of integers
stored). Assume that 1 = X = n and that there are m+n units of space available,
where m is the maximum number of integers that can be in the table at any one
time. (Hint: use two arrays A[1..n] and B[1..m].) You are not allowed to initialize
either A or B, as that would take O(m) or O(n) operations. This means the arrays
are full of random garbage to begin with, so you must be very careful.
Implementation Projects

Sorting and seerching
 
8. Given two sets S1 and S2 (each of size n), and a number x, describe an O(n log n)
algorithm for finding whether there exists a pair of elements, one from S1 and one
from S2, that add up to x. (For partial credit, give a T(n2) algorithm for this
problem.)

9. Outline a reasonable method of solving each of the following problems. Give
the order of the worst-case complexity of your methods.
(a) You are given a pile of thousands of telephone bills and thousands of checks
sent in to pay the bills. Find out who did not pay.
(b) You are given a list containing the title, author, call number and publisher of
all the books in a school library and another list of 30 publishers. Find out
how many of the books in the library were published by each company.
(c) You are given all the book checkout cards used in the campus library during
the past year, each of which contains the name of the person who took out
the book. Determine how many distinct people checked out at least one book.

10. Given a set of S containing n real numbers, and a real number x. We seek an
algorithm to determine whether two elements of S exist whose sum is exactly x.
(a) Assume that S is unsorted. Give an O(n log n) algorithm for the problem.
(b) Assume that S is sorted. Give an O(n) algorithm for the problem.

11. Give an efficient algorithm to compute the union of sets A and B, where
n = max(|A|, |B|). The output should be an array of distinct elements that form
the union of the sets, such that they appear more than once in the union.
(a) Assume that A and B are unsorted. Give an O(n log n) algorithm for the
problem.
(b) Assume that A and B are sorted. Give an O(n) algorithm for the problem.


Heaps

12. Suppose an array A consists of n elements, each of which is red, white, or blue.
We seek to sort the elements so that all the reds come before all the whites, which
come before all the blues The only operation permitted on the keys are
• Examine(A,i) – report the color of the ith element of A.
• Swap(A,i,j) – swap the ith element of A with the jth element.
Find a correct and efficient algorithm for red-white-blue sorting. There is a lineartime
solution.

13. An inversion of a permutation is a pair of elements that are out of order.
(a) Show that a permutation of n items has at most n(n-1)/2 inversions. Which
permutation(s) have exactly n(n - 1)/2 inversions?
(b) Let P be a permutation and Pr be the reversal of this permutation. Show
that P and Pr have a total of exactly n(n - 1)/2 inversions.
(c) Use the previous result to argue that the expected number of inversions in a
random permutation is n(n - 1)/4.

14. Give an efficient algorithm to rearrange an array of n keys so that all the
negative keys precede all the nonnegative keys. Your algorithm must be in-place,
meaning you cannot allocate another array to temporarily hold the items. How fast
is your algorithm?
Other Sorting Algorithms


.


15. Consider the problem of sorting a sequence of n 0’s and 1’s using comparisons.
For each comparison of two values x and y, the algorithm learns which of x < y,
x = y, or x > y holds.
(a) Give an algorithm to sort in n - 1 comparisons in the worst case. Show that
your algorithm is optimal.
(b) Give an algorithm to sort in 2n/3 comparisons in the average case (assuming
each of the n inputs is 0 or 1 with equal probability). Show that your algorithm
is optimal.


Searching

16. A company database consists of 10,000 sorted names, 40% of whom are known as
good customers and who together account for 60% of the accesses to the database.
There are two data structure options to consider for representing the database:
• Put all the names in a single array and use binary search.
• Put the good customers in one array and the rest of them in a second array.
Only if we do not find the query name on a binary search of the first array do
we do a binary search of the second array.



17. Demonstrate which option gives better expected performance. Does this change
if linear search on an unsorted array is used instead of binary search for both
options?

18. Suppose you are given an array A of n sorted numbers that has been circularly
shifted k positions to the right. For example, {35, 42, 5, 15, 27, 29} is a sorted array
that has been circularly shifted k = 2 positions, while {27, 29, 35, 42, 5, 15} has been
shifted k = 4 positions.
• Suppose you know what k is. Give an O(1) algorithm to find the largest
number in A.
• Suppose you do not know what k is. Give an O(lg n) algorithm to find the
largest number in A. For partial credit, you may give an O(n) algorithm.

19. Let M be an n×m integer matrix in which the entries of each row are sorted in
increasing order (from left to right) and the entries in each column are in increasing
order (from top to bottom). Give an efficient algorithm to find the position of an
integer x in M, or to determine that x is not there. How many comparisons of x
with matrix entries does your algorithm use in worst case?

20. Consider an n×n array A containing integer elements (positive, negative, and
zero). Assume that the elements in each row of A are in strictly increasing order,
and the elements of each column of A are in strictly decreasing order. (Hence there
cannot be two zeroes in the same row or the same column.) Describe an efficient
algorithm that counts the number of occurrences of the element 0 in A. Analyze its
running time.

21. Implement versions of several different sorting algorithms, such as selection sort,
insertion sort, heapsort, mergesort, and quicksort. Conduct experiments to assess
the relative performance of these algorithms in a simple application that reads a
large text file and reports exactly one instance of each word that appears within it.
This application can be efficiently implemented by sorting all the words that occur
in the text and then passing through the sorted sequence to identify one instance
of each distinct word. Write a brief report with your conclusions.


graphs
22. Consider a set of movies M1,M2, . . . , Mk. There is a set of customers, each one
of which indicates the two movies they would like to see this weekend. Movies are
shown on Saturday evening and Sunday evening. Multiple movies may be screened
at the same time.
You must decide which movies should be televised on Saturday and which on Sunday,
so that every customer gets to see the two movies they desire. Is there a
schedule where each movie is shown at most once? Design an efficient algorithm to
find such a schedule if one exists.
