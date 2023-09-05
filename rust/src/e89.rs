pub mod example1;
pub mod example2;
pub mod example3;
pub mod example4;
pub mod example5;
pub mod example6;
pub mod example7;
pub mod example8;
pub mod example9;
pub mod example10;

pub fn main() {
    let mut exselected = String::new();
    println!("Enter the example you want to run from the following.");
    println!("Example1 - Enter 1 to run");
    println!("Example2 - Enter 2 to run");
    println!("Example3 - Enter 3 to run");
    println!("Example4 - Enter 4 to run");
    println!("Example5 - Enter 5 to run");
    println!("Example6 - Enter 6 to run");
    println!("Example7 - Enter 7 to run");
    println!("Example8 - Enter 8 to run");
    println!("Example9 - Enter 9 to run");
    println!("Example10 - Enter 10 to run");
    std::io::stdin().read_line(&mut exselected).unwrap();
    if exselected.trim() == "1" {
        example1::main();
    } else if exselected.trim() == "2" {
        example2::main();
    } else if exselected.trim() == "3" {
        example3::main();
    } else if exselected.trim() == "4" {
        example4::main();
    } else if exselected.trim() == "5" {
        example5::main();
    } else if exselected.trim() == "6" {
        example6::main();
    } else if exselected.trim() == "7" {
        example7::main();
    } else if exselected.trim() == "8" {
        example8::main();
    } else if exselected.trim() == "9" {
        example9::main();
    } else if exselected.trim() == "10" {
        example10::main();
    } else {
        println!("Invalid entry");
    }
}