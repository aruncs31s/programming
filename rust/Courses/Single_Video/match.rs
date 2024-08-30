#![allow(unused)]
use std::cmp::Ordering;
use std::sync::atomic::Ordering;

fn main() {
    let some_variable = 10;
    match some_variable{
        1..=9 => println!("Under 10"),
        10 => println!("Equal to 10"),
        _ => println!("Invalid")
    }
}
