package main

import (
	"fmt"
	"Calculator/Arithmetic"
	"Calculator/Geometric"
)

func main() {
	for {
		fmt.Println("1. Addition")
		fmt.Println("2. Subtraction")
		fmt.Println("3. Multiplication")
		fmt.Println("4. Division")
		fmt.Println("5. Square")
		fmt.Println("6. Rectangle")
		fmt.Println("7. Circle")
		fmt.Println("8. Exit")

		var choice int
		fmt.Scanln(&choice)

		switch choice {
		case 1:
			fmt.Println("Enter two numbers:")
			var a, b float64
			fmt.Scanln(&a)
			fmt.Scanln(&b)
			fmt.Println(Arithmetic.Addition(a, b))
        
		case 2:
			fmt.Println("Enter two numbers:")
			var a, b float64
			fmt.Scanln(&a)
			fmt.Scanln(&b)
			fmt.Println(Arithmetic.Subtraction(a, b))
		case 3:
			fmt.Println("Enter two numbers:")
			var a, b float64
			fmt.Scanln(&a)
			fmt.Scanln(&b)
			fmt.Println(Arithmetic.Multiplication(a, b))
		case 4:
			fmt.Println("Enter two numbers:")
			var a, b float64
			fmt.Scanln(&a)
			fmt.Scanln(&b)
			fmt.Println(Arithmetic.Division(a, b))
		case 5:
			fmt.Println("Enter a number:")
			var a float64
			fmt.Scanln(&a)
			fmt.Println(Geometric.Square(a))
		case 6:
			fmt.Println("Enter two numbers:")
			var a, b float64
			fmt.Scanln(&a)
			fmt.Scanln(&b)
			fmt.Println(Geometric.Rectangle(a, b))
		case 7:
			fmt.Println("Enter a number:")
			var a float64
			fmt.Scanln(&a)
			fmt.Println(Geometric.Circle(a))
		case 8:
			return
		default:
			fmt.Println("Invalid choice")
		}
	}
}