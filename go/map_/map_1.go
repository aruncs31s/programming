package main

import "fmt"

func main() {
	m := make(map[string]int)
	m["one"] = 1
	fmt.Println(m["one"]) // prints 1
}
