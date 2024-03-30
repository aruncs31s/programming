// Data Management using tuples
//
//*** Task
//  * Print wheather the y-value of a cartesian coordinate is greater than 5 , less than 5 , or
//  equal to 5
//
//
// * Use a function that returns tuple
// * Destructure the return value into two variables
// * Use an if..else if..ekse block to determine what to print
//
//

fn new_coordinates() -> (i32, i32) {
    (10, 20)
}

fn main() {
    let coordinates = new_coordinates;

    if coordinates().1 < 5 {
        println!("y is < 5");
    } else if coordinates().1 > 5 {
        println!("y is > 5");
    } else {
        println!(" y is = 5");
    }
}
