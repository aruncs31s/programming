package main

import (
	"fmt"
	"regexp"
	"strings"
)

var text string = "The quick brown fox jumps over the lazy dog."

func main() {
	wordCount := make(map[string]int)
	filter := regexp.MustCompile(`[^a-zA-Z0-9]+`)
	text = strings.ToLower(text)
	cleared := filter.ReplaceAllString(text, " ")
	cleared = strings.TrimSpace(cleared) // NOTE: check if i can write like this.
	words := strings.Split(cleared, " ")
	// fmt.Println(words)
	// fmt.Println(len(words))
	wordsCopy := words
	onceTried := make(map[string]int)
	for i := 0; i < len(words); i++ {
		// fmt.Println(i)

		_, exists := onceTried[words[i]]
		if !exists && len(words[i]) > 1 || words[i] == "a" {
			if i < len(words)-1 {
				if words[i+1] == "s" {
					words[i] = strings.Join([]string{words[i], words[i+1]}, "")
					// for j := 0; j < len(words); j++ {
					// 	if words[i] == wordsCopy[j] {
					// 		wordCount[testWord]++
					// 	}
					// }
					//
				}
			}

			for j := 0; j < len(words); j++ {
				if words[i] == wordsCopy[j] {
					wordCount[words[i]]++
				}
			}
		}

		onceTried[words[i]] = 1
	}

	fmt.Println(wordCount)
}
