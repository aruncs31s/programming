package main

import "fmt"

func main() {
	fruits := make([]string, 0)
	fruits = append(fruits, "A")
	fmt.Println(fruits)
	fruits = append(fruits, "B", "C")
	fmt.Println(fruits)
	//
	// fmt.Println("Initial", fruits)
	//
	// fmt.Printf("F1: %s\n", fruits[0])
	//
	// fruits[0] = "AB"
	// fmt.Println("After MOD:", fruits)
	//
	// subFruits := fruits[1:3]
	// fmt.Println("Sub-slice from index 1 to 3:", subFruits)
	//
	// for i, fruit := range fruits {
	// 	fmt.Printf("Index %d: %s\n", i, fruit)
	// }
	//
	// fmt.Printf("Length: %d, Capacity: %d\n", len(fruits), cap(fruits))
	//
	// fruits = append(fruits, "Date", "Elderberry")
	// fmt.Println("After appending two more fruits:", fruits)
	//
	// fruits = fruits[1:]
	// fmt.Println("After removing first element:", fruits)
	//
	// fruits = make([]string, 0)
	// fmt.Println("Empty slice after clearing:", fruits)
}
