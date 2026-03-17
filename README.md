
IBRAHIM SAID  
EB3/67258/23
 
This program implements both Bubble Sort and Selection Sort algorithms to sort integers without using built-in functions.  
It accepts user input arrays and also runs automatic tests on arrays of different sizes. Comparisons and swaps are then recorded for analysis.

 How They Work
- Bubble Sort: Compares adjacent elements and swaps them if they are in the wrong order. This process continues until the list is fully sorted.  
- Selection Sort: Finds the minimum element from the unsorted portion of the array and swaps it with the first unsorted element. This is repeated until the array is sorted.

## Results
- Both algorithms successfully sort small and large lists.  
- Comparisons and swaps are tracked during execution.  
- Bubble Sort generally performs more swaps than Selection Sort.  
- Large lists take significantly longer due to O(n²) complexity.

## Complexity
| Algorithm       | Best Case | Average Case | Worst Case | Space Complexity |
|-----------------|-----------|--------------|------------|-----------------|
| Bubble Sort     | O(n)      | O(n²)        | O(n²)      | O(1)            |
| Selection Sort  | O(n²)     | O(n²)        | O(n²)      | O(1)            |

## Summary
Bubble Sort is simple and easy to implement, but inefficient for large datasets because it swaps elements frequently.  
Selection Sort reduces the number of swaps but still has O(n²) time complexity, making it better than Bubble Sort for minimizing swaps but not for very large lists.
