package main
import "fmt"


func show(){
	fmt.Println("IN SHow FUNC")
}

//function
func mul(a1,a2 int)int{
	res :=a1 *a2
	fmt.Println("Result:",res)
	return 0
}

func add(a1,a2 int)int{
	res :=a1 + a2
	fmt.Println("Result:",res)
	return 0
}

func main(){
	//function
	mul(10,20)
	defer func(){
		fmt.Println("defer1")
	}()

	defer mul(45,687)
	show()
	fmt.Println("Start")
	defer func(){
		fmt.Println("defer2")
		}()

	// execute in LIFO
	defer fmt.Println("End")
	defer add(34 , 56)
	defer add(10 , 10)
}