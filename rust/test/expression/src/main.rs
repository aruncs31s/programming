fn main() {
    let k = 1 > 2;
    println!("{}", k);

    let any_number = 2;

    let new_variable = match any_number {
        1 => 99,
        _ => 0,
    };

    println!("{}", new_variable);
}
