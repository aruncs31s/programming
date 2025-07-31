package main

import (
	"encoding/json"
	"fmt"
)

type User struct {
	ID    int    `json:"id"`
	Name  string `json:"name"`
	Email string `json:"email"`
}

func main() {
	user := User{ID: 1, Name: "John Doe", Email: "john@example.com"}

	// Marshal
	jsonData, err := json.Marshal(user)
	if err != nil {
		fmt.Println("Error marshaling JSON:", err)
		return
	}
	fmt.Println("JSON data:", string(jsonData))

	// Unmarshal
	var newUser User
	err = json.Unmarshal(jsonData, &newUser)
	if err != nil {
		fmt.Println("Error unmarshaling JSON:", err)
		return
	}
	fmt.Println("Go struct:", newUser)
}
