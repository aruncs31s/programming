fn main() {
    fn new_tuples() -> (i32, i32, i32) {
        (1, 2, 3)
    }
    let t = (1, 2, 3);
    println!("{}", t.1);
    let k = new_tuples();
    println!("{}", k.1);
}
