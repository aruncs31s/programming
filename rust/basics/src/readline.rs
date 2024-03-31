use std::io;
fn main() {
    let mut name = String::new();
    io::stdin()
        .read_line(&mut name)
        .expect("Failed To read the line");
    println!("{}", name);
}
