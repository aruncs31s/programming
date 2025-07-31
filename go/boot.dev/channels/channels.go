package main

import (
	"fmt"
	"time"
)

func main() {
	ch := make(chan int) // creates a channel ch

	go func() {
		fmt.Println("1")
		time.Sleep(1 * time.Second)
		ch <- 42
		fmt.Println("2")
	}()

	fmt.Println("3")
	value := <-ch

	fmt.Println("4")
	fmt.Println(value)
}
