package main

import (
	"fmt"
	"net/http"
)

func middleware(next http.Handler) http.Handler {
	return http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		// Logic before the handler
		fmt.Println("Before handler")

		// Call the next handler
		next.ServeHTTP(w, r)

		// Logic after the handler
		fmt.Println("After handler")
	})
}

func helloHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Working")
}

func main() {
	http.HandleFunc("/hello", helloHandler)
	http.ListenAndServe(":8078", nil)
}

