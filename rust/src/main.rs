mod e81;
mod e82;
mod e83;
mod e84;
mod e85;
mod e86;
mod e87;
mod e88;

fn main() {
    let mut selected = String::new();
    println!("Select a example list from the list.");
    println!("Example list 8.1 - Enter 1 to select");
    println!("Example list 8.2 - Enter 2 to select");
    println!("Example list 8.3 - Enter 3 to select");
    println!("Example list 8.4 - Enter 4 to select");
    println!("Example list 8.5 - Enter 5 to select");
    println!("Example list 8.6 - Enter 6 to select");
    println!("Example list 8.7 - Enter 7 to select");
    println!("Example list 8.8 - Enter 8 to select");
    println!("Example list 8.9 - Enter 9 to select");
    println!("Example list 8.10 - Enter 10 to select");
    println!("Example list 8.11 - Enter 11 to select");
    println!("Example list 8.12 - Enter 12 to select");
    println!("Example list 8.13 - Enter 13 to select");
    std::io::stdin().read_line(&mut selected).unwrap();
    if selected.trim() == "1" {
        e81::main();
    } else if selected.trim() == "2" {
        e82::main();
    } else if selected.trim() == "3" {
        e83::main();
    } else if selected.trim() == "4" {
        e84::main();
    } else if selected.trim() == "5" {
        e85::main();
    } else if selected.trim() == "6" {
        e86::main();
    } else if selected.trim() == "7" {
        e87::main();
    } else if selected.trim() == "8" {
        e88::main();
    }
}
