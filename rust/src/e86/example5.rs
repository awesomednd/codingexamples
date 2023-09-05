pub fn main() {
    let mut inputvalue = String::new(); inputvalue = "Yes".to_string();
    while inputvalue.trim() == "Yes" {
        println!("Do you wnat to continue");
        inputvalue = "".to_string();
        std::io::stdin().read_line(&mut inputvalue).unwrap();
    }
}