#![allow(dead_code)]

#[derive(Debug)]
struct heightWeight {
    height: u32,
    weight: u32,
}

struct Animal {
    Name: String,
    color: String,
    Properties: heightWeight,
}
fn main() {
    let new_dog: String = "Nandini".to_string();
    let new_dog_height_weight = heightWeight {
        height: 100,
        weight: 10,
    };

    println!("{:?}", new_dog_height_weight);
}
