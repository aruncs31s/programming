// Channels

package main

import "fmt"

func main() {
	ch := make(chan int)

	go func() {
		ch <- 42 // Send 42 to the channel ch
	}

	value := <-ch

	fmt.Println("Received:", value) // Output: Received:
	42
}
