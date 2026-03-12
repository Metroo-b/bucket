SAID IBRAHIM BATI  EB3/67258/23

Bucket Sort is a sorting algorithm that works by dividing elements into several groups called buckets, sorting each bucket individually, and then combining all buckets to produce the final sorted list.
It works best when the input numbers are uniformly distributed over a range (for example numbers between 0 and 1).
Idea:
		Scatter elements into buckets.
		Sort each bucket.
	  Gather the buckets back together.
Step-by-Step Process
	1.	Create Buckets
	•	Create several empty containers called buckets.
	•	The number of buckets often equals the number of elements.
	2.	Distribute Elements
	•	Each element in the array is placed into a bucket depending on its value.
	•	Example rule for numbers between 0 and 1:
bucketIndex = n \times value
where n = number of buckets.
	3.	Sort Each Bucket
	•	Each bucket is sorted individually.
	•	Usually a simple algorithm like Insertion Sort is used because buckets contain few elements.
	4.	Concatenate Buckets
	•	Combine the buckets in order.
	•	The result becomes the sorted array.
