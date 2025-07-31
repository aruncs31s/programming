package main

import (
	"fmt"
	"log" // It's good practice to use log for server errors
	"net/http"
)

func middleware(next http.Handler) http.Handler {
	return http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		// Logic before the handler
		fmt.Printl("Before handler")

		// Call the next handler in the chain
		next.ServeHTTP(w, r)

		// Logic after the handler
		fmt.Printl("After handler")
	})
}

func helloHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Working")
}

func main() {
	// 1. Wrap your handler with the middleware.
	// 2. Use http.Handle because it takes an http.Handler object.
	http.Handle("/hello", middleware(http.HandlerFunc(helloHandler)))

	fmt.Println("Server starting on port :8078")
	// Use log.Fatal to print an error if the server fails to start.
	log.Fatal(http.ListenAndServe(":8078", nil))
}
