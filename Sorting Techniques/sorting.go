package main

import "fmt"

// To sort the array using bubble sort
// Call BubbleSort(array)
func BubbleSort(arr []int) {
	for i := 0; i < len(arr); i++ {
		for j := 0; j < (len(arr) - i - 1); j++ {
			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	fmt.Println("Sorted Array:",arr)
}

// To sort the array using Insertion Sort
// Call InsertionSort(arr)
func InsertionSort(arr []int) {
	for i := 1; i < len(arr); i++ {
		j := i
		for j > 0 && arr[j] < arr[j-1] {
			arr[j], arr[j-1] = arr[j-1], arr[j]
			j -= 1
		}
	}
	fmt.Println("Sorted Array:",arr)
}

// To sort the array using Merge Sort (Recursive Method)
// Call MergeSort(arr)
func MergeSort(arr []int) {
	if len(arr) < 2 {
		fmt.Println(arr)
	}

	mid := len(arr) / 2
	left := arr[:mid]
	right := arr[mid:]

	size, i, j := len(left)+len(right), 0, 0
	arr = make([]int, size, size)

	for k := 0; k < size; k++ {
		if i > len(left)-1 && j <= len(right)-1 {
			arr[k] = right[j]
			j++
		} else if j > len(right)-1 && i <= len(left)-1 {
			arr[k] = left[i]
			i++
		} else if left[i] < right[j] {
			arr[k] = left[i]
			i++
		} else {
			arr[k] = right[j]
			j++
		}
	}
	fmt.Println("Sorted Array:",arr)
}

// To sort the array using Selection Sort
// Call SelectionSort(arr)
func SelectionSort(arr []int) {
	for i := 0; i < len(arr); i++ {
		small := arr[i]
		pos := i
		for j := i + 1; j < len(arr); j++ {
			if arr[j] < small {
				small = arr[j]
				pos = j
			}
		}
		arr[i], arr[pos] = arr[pos], arr[i]
	}
	fmt.Println("Sorted Array:",arr)
}

func main() {
	var N int
	fmt.Println("Enter the Elements: ")
	fmt.Scan(&N)
	
	arr := make([]int, N)
	for i:=0; i<N; i++ {
		fmt.Scan(&arr[i])
	}
	fmt.Println("Unsorted Array: ",arr)

	// Uncomment the method you wish to work on
	// BubbleSort(arr)
	// InsertionSort(arr)
	// MergeSort(arr)
	// SelectionSort(arr)
}
