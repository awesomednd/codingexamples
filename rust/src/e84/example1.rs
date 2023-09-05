pub fn main() {
    let mut color = String::new();
    let mut name = String::new();
    println!("Enter a colour");
    std::io::stdin().read_line(&mut color).unwrap();
    println!("Enter a name");
    std::io::stdin().read_line(&mut name).unwrap();
    println!("{} your faviroute color is {}.", name.trim(), color.trim());
}