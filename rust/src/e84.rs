pub mod example1;
pub mod example2;

pub fn main() {
    let mut exselected = String::new();
    println!("Enter the example you want to run from the following.");
    println!("Example1 - Enter 1 to run");
    println!("Example2 - Enter 2 to run");
    std::io::stdin().read_line(&mut exselected).unwrap();
    if exselected.trim() == "1" {
        example1::main();
    } else if exselected.trim() == "2" {
        example2::main();
    } else {
        println!("Invalid entry");
    }
}