package main

import "fmt"

func main() {
	fruits := [3]string{"apple", "banana", "orange"}
	for i := 0; i < len(fruits); i++ {
		fmt.Println(fruits[i])
	}
	for _, val := range fruits {
		fmt.Println("%v\n",val)
	}
}
