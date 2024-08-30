#![allow(unused)]
use std::cmp::Ordering;
// use std::sync::atomic::Ordering;

fn main() {
    let some_variable = 10; // This the actual variable 
    let some_other_variable = 20 ; // This var is only used to compare
    match some_variable.cmp(&some_other_variable){
    Ordering::Less => println!("some var is less that some other var"),
    Ordering::Greater => println!("Some var is greater than some other var"),
    Ordering::Equal => println!("The both Variables Matched"),
    }
}
