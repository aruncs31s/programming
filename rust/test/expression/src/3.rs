fn main() {
    // let number: f64 = 1.0;
    // let width: usize = 5;
    // println!("{number:<width$}");
    println!("{0}, this is {1}. {1}, this is {0}", "Alice", "Bob");
    println!(
        "{subject} {verb} {object}",
        object = "the lazy dog",
        subject = "the quick brown fox",
        verb = "jumps over"
    );
}
