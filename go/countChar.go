package main

import (
	"fmt"
	"regexp"
)

func strMinUpperCaseTest(strMinUpperCase int, strInput string) bool {
    var count int
    count = 0
    var res bool

    for _, character := range strInput {
        if res, _ = regexp.MatchString(`[A-Z]`, string(character)); res {
        //if res, _ = regexp.MatchString(`[a-z]`, string(character)); res { //lower case
        //if res, _ = regexp.MatchString(`\d`, string(character)); res { //digit case
        //if res, _ = regexp.MatchString(`\W`, string(character)); res { //non-alpha case
           count++
        }
    }

    if (count < strMinUpperCase) {
        return false
    }
    return true

}

func main() {
	strInput := "123456aAA"
	numOfUpper := 2
	if(strMinUpperCaseTest(numOfUpper, strInput)){
	    fmt.Print("true")
        } else {
            fmt.Print("false")
        }
}

