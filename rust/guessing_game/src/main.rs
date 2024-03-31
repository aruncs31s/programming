use rand::Rng;
use std::io;
fn main() {
    let mut guess = String::new();
    println!("Enter the guess");
    io::stdin()
        .read_line(&mut guess)
        .expect(r#"failed to read"#);

    println!("Your Guess = {}", guess);
    // let secret_number: rand::ThreadRng = rand::thread_rng();
    // println!("{:?}", secret_number);
    let secret_number = rand::thread_rng().gen_range(1, 101);
    println!("The secret number is: {}", secret_number);
    let new_guess: Result<i32, _> = guess.parse();
    match new_guess.expect("REASON").cmp(&secret_number) {
        std::cmp::Ordering::Less => println!("Too small!"),
        std::cmp::Ordering::Greater => println!("Too big!"),
        std::cmp::Ordering::Equal => println!("You win!"),
    }
}
