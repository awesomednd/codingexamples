pub fn main() {
    let x = 1;
    let y = 2;
    let z = 3;
    let total = x + y + z;
    let mut values = String::new(); 
    println!("Enter a number.");
    std::io::stdin().read_line(&mut values).unwrap();
    let value = values.trim().parse::<i32>().unwrap();
    println!("Total is {} \n Value is {}", total, value);
}