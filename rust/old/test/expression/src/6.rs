fn main() {
    let mut x = 10;

    loop {
        println!("{x}");
        x = x - 1;
        if x == 0 {
            break;
        }
    }
}
