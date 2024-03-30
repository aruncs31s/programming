/// .
fn main() {
    println!("Hello, world!");

    let mut n = String::new();

    std::io::stdin().read_line(&mut n).unwrap();

    println!("N = {}", n);
}
