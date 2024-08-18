package main

import "fmt"

func main() {
	// Declare an array of 10 integers
	var n [10]int

	// Initialize elements of array n to 0
	for i := 0; i < 10; i++ {
		n[i] = i + 100 // set element at location i to i + 100
	}

	// Output each array element's value
	for j := 0; j < 10; j++ {
		fmt.Printf("Element[%d] = %d\n", j, n[j])
	}

	// Nil slice
	var numbers []int
	fmt.Printf("len = %d cap = %d slice = %v\n", len(numbers), cap(numbers), numbers)

	// Create a slice with make
	numbers = make([]int, 3, 5)  //3 is length  and 5:capacity
	fmt.Printf("len = %d, cap = %d, slice = %v\n", len(numbers), cap(numbers), numbers)

	// Create an array and a slice from it
	odd := [6]int{2, 4, 6, 8, 10, 12}
	var s []int = odd[1:4]
	fmt.Println(s)
}