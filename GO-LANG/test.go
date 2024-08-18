
package main

import "fmt"

func main() {
	var std1 string
	var std2 = "Acts"
	x := 20
	std1 = "CDAC"

	fmt.Println(std1)
	fmt.Println(std2)
	fmt.Println(x)

	var a, b, c, d int = 1, 3, 5, 7
	fmt.Println(a)
	fmt.Println(b)
	fmt.Println(c)
	fmt.Println(d)

	var (
		a1 int
		b1 int = 1
		c1 string = "hello"
	)
	fmt.Println(a1)
	fmt.Println(b1)
	fmt.Println(c1) // note: not c2, but c1
}