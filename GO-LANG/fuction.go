package main

import (
	"fmt"
	"strings"
)

// Variable function to join strings
func joinstr(elements ...string) string {
	return strings.Join(elements, "-")
}

// Variadic function to return sum of integers
func sum(nums ...int) {
	fmt.Print(nums, " ")
	total := 0
	for _, num := range nums {
		total += num
	}
	fmt.Println(total)
}

func main() {
	// Pass a slice in variable function
	elements := []string{"CDAC", "ACTS", "DHPCAP"}
	fmt.Println(joinstr(elements...))
	fmt.Println(joinstr("CDAC", "ACTS", "DHPCAP"))
	sum(4, 5, 6)
	sum(4, 5, 6, 7, 8, 9)

	// Assigning an anonymous function to a variable
	value := func() {
		fmt.Println("Hello World")
	}
	value()

	// Anonymous function with arguments
	var sum = func(n1, n2, n3 int) {
		sum := n1 + n2 + n3
		fmt.Println(sum)
	}
	sum(1, 2, 3)

	// Return value from an anonymous function
	var sum1 = func(n1, n2, n3 int) int {
		sum1 := n1 + n2 + n3
		return sum1
	}
	result := sum1(2, 3, 4)
	fmt.Println(result)

	area := func(length, breadth int) int {
		return length * breadth
	}
	fmt.Println(area(2, 3))

	// Anonymous function as an argument to another function
	sum2 := func(num1 int, num2 int) int {
		return num1 + num2
	}
	result = findSqure(sum2(6, 8))
	fmt.Println(result)
}

func findSqure(num int) int {
	return num * num
}

