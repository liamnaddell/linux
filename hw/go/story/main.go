package main

import "fmt"
import "os"
import "bufio"

var scanner = bufio.NewScanner(os.Stdin)

type storyFunction func() storyFunction

func input(message string) string {
	tell(message)
	scanner.Scan()
	return scanner.Text()

}

func tell(message string) {
	fmt.Println(message)
}
func Welcome() storyFunction {
	tell("My name is keiram")
	return Name
}
func Name() storyFunction {
	name := input("What is your name:")
	tell("Howdy " + name)
	return nil
}
func main() {
	for handler := Welcome; handler != nil; handler = handler() {

	}
}
