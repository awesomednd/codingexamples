use substring::Substring;

pub fn main() {
    let message = "Goodbye";
    let newmessage = message.substring(0, 4);
    println!("The substring is {}", newmessage);
}