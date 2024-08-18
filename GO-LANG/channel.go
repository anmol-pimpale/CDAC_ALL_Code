package main

import "fmt"

func myfunc(ch chan int) {
	fmt.Println(234 + <-ch)
}

func myfunc1(mychnnl chan string) {
	for v := 0; v < 4; v++ {
		mychnnl <- "CDAC-ACTS"
	}
	close(mychnnl)
}

func main() {
	fmt.Println("START Main channel")
	// Creating channel
	ch := make(chan int)
	go myfunc(ch)
	ch <- 23

	// Creating a channel
	c := make(chan string)
	// Calling Goroutine
	go myfunc1(c)

	// When value of ok is set to true means the channel is open and it can send or receive data
	// When the value of ok is set to false means the channel is closed and it can not send or receive data
	for {
		res, ok := <-c
		if ok == false {
			fmt.Println("channel is closed")
			break
		}
		fmt.Println("channel is open", res, ok)
	}
	fmt.Println("End main method")
}

