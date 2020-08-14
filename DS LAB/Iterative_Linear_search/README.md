# Experiment - 1
## Aim : Write a program that uses Iterativee functions to perform the linear search operation for a key value in a given list of integers.   
### Step by step procedure:
1.Create an array with a fixed length, take the size of the array on which linear search is to be performed as input.

2.Take all the elements as input, take the key value from console. 

3.Compare the elements in the array with key value and if we encounter  the key value it will return it's postion. If at all the key value not found it will return 'Element not found'
 ## Output Obtained :
Elements :
a[0] = 10 ;  a[1] = 6 ; a[2] = 8 ; a[3] =  15 ; a[4] = 20 ;  a[5] = 3 ; a[6]  =  14 ; a[7] = 99 ; a[8] = 66 ; a[9] = 30
### Key Element = 66; 
Iteration 1:
a[0] = 10;
a[0] != key ;                  [case failed]
Iteration 2:
a[1] = 6;
a[1] != key ;                  [case failed]
Iteration 3:
a[2] = 8;
a[2] != key ;                  [case failed]
Iteration 4:
a[3] = 15;
a[3] != key ;                  [case failed]
Iteration 5:
a[4] = 20;
a[4] != key ;                  [case failed]
Iteration 6:
a[5] = 3;
a[5] != key ;                  [case failed]
Iteration 7:
a[6] = 14;
a[6] != key ;                  [case failed]
Iteration 8:
a[7] = 99;
a[7] != key ;                  [case failed]
Iteration 9:
a[8] = 66;
a[8] == key ;                  [case passed]

ELEMENT FOUND AT INDEX POSTION ‘8’
### Output with key value = 66
![output](linearWR66.JPG)
### Key element  = 0;
Iteration 1:
a[0] = 10;
a[0] != key ;                  [case failed]
Iteration 2:
a[1] = 6;
a[1] != key ;                  [case failed]
Iteration 3:
a[2] = 8;
a[2] != key ;                  [case failed]
Iteration 4:
a[3] = 15;
a[3] != key ;                  [case failed]
Iteration 5:
a[4] = 20;
a[4] != key ;                  [case failed]
Iteration 6:
a[5] = 3;
a[5] != key ;                  [case failed]
Iteration 7:
a[6] = 14;
a[6] != key ;                  [case failed]
Iteration 8:
a[7] = 99;
a[7] != key ;                  [case failed]
Iteration 9:
a[8] = 66;
a[8] != key ;                  [case Failed]
 
Iteration 10:
a[9] = 30;
a[9] != key ;                  [case Failed]
 
KEY ELEMENT NOT FOUND

### Output with key value = 0
![output](linearWR0.JPG)
