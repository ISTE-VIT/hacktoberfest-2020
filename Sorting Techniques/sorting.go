package main

import "fmt"

// To sort the array using bubble sort
// Call BubbleSort(array)
func BubbleSort(arr []int) {
	for i:=0; i<len(arr); i++ {
		for j:=0; j<(len(arr)-i-1); j++ {
			if arr[j] < arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	fmt.Println(arr)
}


// To sort the array using Insertion Sort
// Call Insertion Sort
func InsertionSort(arr []int)  {
	for i:=1; i<len(arr); i++ {
		j:= i
		for j>0; arr[j]<arr[j-1]; j-- {
			arr[j], arr[j-1] = arr[j-1], arr[j]
		}		
	}
	fmt.Println(arr)
}

func main()  {
	arr := [6,2,3,1,7,4]
	BubbleSort(arr)
}