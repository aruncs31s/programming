fn main() {
    'outer: loop {
        println!("Outer");

        'inner: loop {
            break 'outer;
            println!("inner");
        }
    }
}
