fn main() {
    let some_number = {
        let x = 5;
        let y = 10;
        x * y
    };
    some_number = 60;
    println!("{some_number}");
}
